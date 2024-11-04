/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:52:14 by gchamore          #+#    #+#             */
/*   Updated: 2024/11/04 16:01:28 by gchamore         ###   ########.fr       */
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
	unsigned int getGradeToSign() const;
	unsigned int getGradeToExecute() const;
	bool getSigned() const;
	void beSigned(Bureaucrat &bureaucrat);


private:
	std::string const _name = 0;
	unsigned int const _gradeToSign = 0;
	unsigned int const _gradeToExecute = 0;
	bool _signed = 0;
};

std::ostream& operator<<(std::ostream& os, const AForm& AForm);

#endif