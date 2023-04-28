#ifndef AFORM_H
#define AFORM_H

#include <iostream>

class Bureaucrat;


class AForm
{
private:
	const std::string m_name;
	const std::string m_target;
	const unsigned int m_rqSign;
	const unsigned int m_rqExecute;
	bool m_isSigned;

public:
	const std::string& getName() const;
	const std::string& getTarget() const;
	unsigned int getRqSign() const;
	unsigned int getRqExecute() const;
	bool getIsSigned() const;

public:
	void beSigned(const Bureaucrat& _bureaucrat);
	virtual void formExecute(const Bureaucrat& _bureaucrat) const = 0;
	virtual void execute(const Bureaucrat& _bureaucrat) const;


protected:
	AForm();	
	AForm(const std::string& _name, const std::string& _target, const unsigned int _rqSign, const unsigned int _rqExecute);

public:
	AForm(const AForm& _other);
	AForm& operator = (const AForm& _other);
	virtual ~AForm();

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

	class NotSignedException
		: public std::exception
	{
	public:
		const char* what() const throw();
	};

	class AlreadySignedException
		: public std::exception
	{
	public:
		const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& out, const AForm& bureaucrat);

#endif

