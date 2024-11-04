/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:52:14 by gchamore          #+#    #+#             */
/*   Updated: 2024/11/04 15:43:01 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>

class Bureaucrat;

class AForm
{
public:
	AForm();
	AForm(const std::string name, unsigned int const gradetosign, unsigned int const gradetoexecute);
	AForm(const AForm &other);
	~AForm();

	AForm &operator=(const AForm &other);

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "Grade is too high!";
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "Grade is too low!";
		}
	};

	std::string getName() const;
	unsigned int getGrade() const;
	bool getSigned() const;
	void beSigned(Bureaucrat &bureaucrat);


private:
	std::string const _name;
	unsigned int const _gradeToSign;
	unsigned int const _gradeToExecute;
	bool _signed;
};

std::ostream& operator<<(std::ostream& os, const AForm& AForm);

#endif