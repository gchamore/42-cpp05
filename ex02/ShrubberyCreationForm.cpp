/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:40:48 by gchamore          #+#    #+#             */
/*   Updated: 2024/09/30 14:53:07 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("default", 145, 137), _target("default")
{
	std::cout << "Default ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(Bureaucrat &bureaucrat, std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm constructor named called" << std::endl;
	if (bureaucrat.getGrade() < 1) throw GradeTooHighException();
	if (bureaucrat.getGrade() > 150) throw GradeTooLowException();
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other)
{
	std::cout << "ShrubberyCreationForm Copy Constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
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

void ShrubberyCreationForm::create_tree() const
{
    std::string filename = _target + "_shrubbery";
    std::ofstream file(filename.c_str());
    if (!file.is_open())
    {
        std::cerr << "Erreur : impossible de créer le fichier " << filename << std::endl;
        return;
    }
    file << "       _-_\n";
    file << "    /~~   ~~\\\n";
    file << " /~~         ~~\\\n";
    file << "{               }\n";
    file << " \\  _-     -_  /\n";
    file << "   ~  \\\\ //  ~\n";
    file << " _- -   | | _- _\n";
    file << "   _ -  | |   -_\n";
    file << "       // \\\\\n";
    file.close();
    std::cout << "Arbre ASCII créé dans le fichier " << filename << std::endl;
}


