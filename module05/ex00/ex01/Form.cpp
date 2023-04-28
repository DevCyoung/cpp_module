#include "Form.h"


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
    std::cout << "Form copy assignment operator" << std::endl;
    m_isSigned = _other.m_isSigned;
    return *this;
}

void Form::beSigned()
{

}



std::ostream& operator<<(std::ostream& out, const Form& bureaucrat)
{
    // TODO: 여기에 return 문을 삽입합니다.
    return out;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return "Exception: gradeTooHighException grade too higher";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Exception: gradeTooLowException grade too lower";
}