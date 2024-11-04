/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:40:48 by gchamore          #+#    #+#             */
/*   Updated: 2024/11/04 15:43:13 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _name("default"), _gradeToSign(1), _gradeToExecute(1) , _signed(false)
{
	// std::cout << "Default constructor called" << std::endl;
}

AForm::AForm(const std::string name, const unsigned int gradetosign, const unsigned int gradetoexecute) : _name(name), _gradeToSign(gradetosign), _gradeToExecute(gradetoexecute), _signed(false)
{
	// std::cout << "constructor named called" << std::endl;
	if (gradetosign < 1) throw GradeTooHighException();
	if (gradetoexecute < 1) throw GradeTooHighException();
	if (gradetoexecute > 150) throw GradeTooLowException();
    if (gradetosign > 150) throw GradeTooLowException();
}

AForm::AForm(const AForm &other) : _name(other._name), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute), _signed(other._signed)
{
	// std::cout << "Copy constructor called" << std::endl;
}

AForm::~AForm()
{
	// std::cout << "Destructor called" << std::endl;
}

AForm &AForm::operator=(const AForm &other)
{
	if (this != &other)
	{
		_signed = other._signed;
	}
	// std::cout << "Assignment operator called" << std::endl;
	return *this;
}

std::ostream &operator<<(std::ostream &os, const AForm &AForm)
{
    os << "AForm Name: " << AForm.getName() << ", Signed: " << (AForm.getSigned() ? "Yes" : "No") << ", Grade Required: " << AForm.getGrade() << std::endl;
    return os;
}


void AForm::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > this->_gradeToSign)
    {
        throw GradeTooLowException();
    }
    this->_signed = true;
}

std::string AForm::getName() const
{
	return _name;
}

unsigned int AForm::getGrade() const
{
	return _gradeToSign;
}

bool AForm::getSigned() const
{
	return _signed;
}

