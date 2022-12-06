#include "Form.h"
#include "Bureaucrat.h"

Form::Form()
    : m_name("NULL")
    , m_rqSign(1)
    , m_rqExecute(1)
    , m_isSigned(false)
{
    std::cout << "Form default constructor" << std::endl;
}

Form::~Form()
{
    std::cout << "Form destructor constructor" << std::endl;
}


Form::Form(const std::string& _name, const unsigned int _rqSign, const unsigned int _rqExecute)
    : m_name(_name)
    , m_rqSign(_rqSign)
    , m_rqExecute(_rqExecute)
    , m_isSigned(false)
{
    std::cout << "Form name rqSign rqExecute constructor" << std::endl;
    if (m_rqSign < 1 || m_rqExecute < 1)
    {
        throw Form::GradeTooHighException();
    }
    else if (m_rqSign > 150 || m_rqExecute > 150)
    {
        throw Form::GradeTooHighException();
    }       
}


Form::Form(const Form& _other)
    : m_name(_other.m_name)
    , m_rqSign(_other.m_rqSign)
    , m_rqExecute(_other.m_rqExecute)
    , m_isSigned(_other.m_isSigned)
{
    std::cout << "Form copy constructor" << std::endl;
}

Form& Form::operator=(const Form& _other)
{
    std::cout << "Form copy assignment operator" << _other.getName() << std::endl;
    return *this;
}

void Form::beSigned(const Bureaucrat& _bureaucrat)
{
    if (m_isSigned == true)
    {
        return;
    }

    if (_bureaucrat.getGrade() <= m_rqSign)
    {
        m_isSigned = true;
    }        
    else
    {
        throw Form::GradeTooLowException();
    }
        
}

const std::string& Form::getName() const
{
    return m_name;
}

unsigned int Form::getRqSign() const
{
    return m_rqSign;
}

unsigned int Form::getRqExecute() const
{
    return m_rqExecute;
}

bool Form::getIsSigned() const
{
    return m_isSigned;
}



std::ostream& operator<<(std::ostream& _out, const Form& _form)
{
    std::cout << "------------------------" << std::endl;
    std::cout << "Form" << std::endl;
    _out << "name : "               << _form.getName() << std::endl;
    _out << "Require Signe : "      << _form.getRqSign() << std::endl;
    _out << "Require Excute : "     << _form.getRqExecute() << std::endl;
    if (_form.getIsSigned() == true)
    {
        _out << "Is Signed : true" << std::endl;
    }
    else
    {
        _out << "Is Signed : false" << std::endl;
    }
    std::cout << "------------------------" << std::endl;
    return _out;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return "too higher";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "too lower";
}