#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>

class Form;

class Bureaucrat
{
private:
	const std::string	m_name;
	unsigned int		m_grade;

public:
	const std::string&	getName()  const;
	unsigned int		getGrade() const;

public:
	void setGrade(unsigned int _grade);
	void decrease();
	void increase();

	void signedForm(Form& _form);

protected :
	Bureaucrat();

public:
	Bureaucrat(const std::string _name, const unsigned int _grade);
	Bureaucrat(const Bureaucrat& _other);
	Bureaucrat& operator = (const Bureaucrat& _other);
	~Bureaucrat();


	class GradeTooHighException
		: public std::exception
	{
	public:
		const char* what() const throw();
	};

	class GradeTooLowException 
		: public std::exception
	{
	public:
		const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat);

#endif
