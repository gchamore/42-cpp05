/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:40:48 by gchamore          #+#    #+#             */
/*   Updated: 2024/09/30 14:53:07 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("default", 25, 5), _target("default")
{
	std::cout << "Default PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(Bureaucrat &bureaucrat, std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "PresidentialPardonForm constructor named called" << std::endl;
	if (bureaucrat.getGrade() < 1) throw GradeTooHighException();
    if (bureaucrat.getGrade() > 150) throw GradeTooLowException();
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other)
{
	std::cout << "PresidentialPardonForm Copy Constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Destructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	if (this != &other)
	{
		_name = other._name;
		_gradetosign = other._gradetosign;
		_gradetoexecute = other._gradetoexecute;
		_signed = other._signed;
	}
	std::cout << "Assignment operator called" << std::endl;
	return *this;
}

void PresidentialPardonForm::pardoned() const
{
	std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}