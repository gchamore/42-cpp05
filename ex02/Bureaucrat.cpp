/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:52:59 by gchamore          #+#    #+#             */
/*   Updated: 2024/11/04 16:44:46 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat()
{
	// std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) : _name(name), _grade(grade)
{
	// std::cout << "constructor named called" << std::endl;
	if (grade < 1) throw GradeTooHighException();
    if (grade > 150) throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade)
{
	// std::cout << "Copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	// std::cout << "Destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
	{
		_grade = other._grade;
	}
	// std::cout << "Assignment operator called" << std::endl;
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& Bureaucrat)
{
    os << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade() << std::endl;
    return os;
}

void Bureaucrat::IncrementGrade()
{
    if (_grade <= 1)
		throw GradeTooHighException();
    _grade--;
}

void Bureaucrat::DecrementGrade()
{
    if (_grade >= 150)
		throw GradeTooLowException();
    _grade++;
}

std::string Bureaucrat::getName() const
{
	return _name;
}

unsigned int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->getName() << " signed " << form.getName() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << this->getName() << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(Form const & form) const
{
	if (form.getSigned() == false)
	{
		std::cout << this->getName() << " couldn't execute " << form.getName() << " because the form is not signed" << std::endl;
		return;
	}
	if (this->getGrade() > form.getGradeToExecute())
	{
		std::cout << this->getName() << " couldn't execute " << form.getName() << " because his grade is too low" << std::endl;
		return;
	}
	std::cout << this->getName() << " executed " << form.getName() << std::endl;
}