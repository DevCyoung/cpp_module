#ifndef FORM_H
#define FORM_H

#include <iostream>

class Form
{
private:
	const std::string m_name;
	const unsigned int m_rqSign;
	const unsigned int m_rqExecute;
	bool m_isSigned;

public:
	void beSigned();

protected:
	Form();

public:
	Form(const std::string& _name, const unsigned int _rqSign, const unsigned int _rqExecute);
	Form(const Form& _other);
	Form& operator = (const Form& _other);
	~Form();

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

std::ostream& operator<<(std::ostream& out, const Form& bureaucrat);

#endif

