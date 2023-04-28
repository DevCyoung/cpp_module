#include "AForm.h"
#include "Bureaucrat.h"

AForm::AForm()
    : m_name("NULL")
    , m_rqSign(1)
    , m_rqExecute(1)
    , m_isSigned(false)
{
    std::cout << "Form default constructor" << std::endl;
}

AForm::~AForm()
{
    std::cout << "Form destructor constructor" << std::endl;
}


AForm::AForm(const std::string& _name, const std::string& _target, const unsigned int _rqSign, const unsigned int _rqExecute)
    : m_name(_name)
    , m_target(_target)
    , m_rqSign(_rqSign)
    , m_rqExecute(_rqExecute)
    , m_isSigned(false)
{
    std::cout << "Form name rqSign rqExecute constructor" << std::endl;
    if (m_rqSign < 1 || m_rqExecute < 1)
    {
        throw AForm::GradeTooHighException();
    }
    else if (m_rqSign > 150 || m_rqExecute > 150)
    {
        throw AForm::GradeTooHighException();
    }       
}


AForm::AForm(const AForm& _other)
    : m_name(_other.m_name)
    , m_rqSign(_other.m_rqSign)
    , m_rqExecute(_other.m_rqExecute)
    , m_isSigned(_other.m_isSigned)
{
    std::cout << "Form copy constructor" << std::endl;
}

AForm& AForm::operator=(const AForm& _other)
{   
    std::cout << "Form copy operator assign" << std::endl;
    return *this;
}

void AForm::beSigned(const Bureaucrat& _bureaucrat)
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
        throw AForm::GradeTooLowException();
    }
        
}

void AForm::execute(const Bureaucrat& _bureaucrat) const
{
    if (m_isSigned == false)
    {
        throw AForm::NotSignedException();
    }
    else if (_bureaucrat.getGrade() <= m_rqExecute)
    {
        if (m_isSigned == true)
        {
            throw AForm::AlreadySignedException();
        }
        formExecute(_bureaucrat);
    }
    else
    {
        throw AForm::GradeTooLowException();
    }
}

const std::string& AForm::getName() const
{
    return m_name;
}

const std::string& AForm::getTarget() const
{
    return m_target;
}

unsigned int AForm::getRqSign() const
{
    return m_rqSign;
}

unsigned int AForm::getRqExecute() const
{
    return m_rqExecute;
}

bool AForm::getIsSigned() const
{
    return m_isSigned;
}




std::ostream& operator<<(std::ostream& _out, const AForm& _form)
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

const char* AForm::GradeTooHighException::what() const throw()
{
    return "too higher";
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return "too lower";
}

const char* AForm::NotSignedException::what() const throw()
{
    return "not signed";
}

const char* AForm::AlreadySignedException::what() const throw()
{
    return "already signed";
}
