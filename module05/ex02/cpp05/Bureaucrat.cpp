#include "Bureaucrat.h"
#include "AForm.h"
#include <iostream>




Bureaucrat::Bureaucrat()
    : m_name("NULL")
    , m_grade(1)
{
    std::cout << "Bureaucrat default constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string _name, const unsigned int _grade)
    : m_name(_name)
    , m_grade(1)
{
    std::cout << "Bureaucrat Name grade constructor" << std::endl;
    setGrade(_grade);
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& _other)
{
    std::cout << "Bureaucrat copy assignment operator" << std::endl;
    m_grade = _other.m_grade;    
    return *this;
}

Bureaucrat::Bureaucrat(const Bureaucrat& _other)
    : m_name(_other.m_name)
    , m_grade(_other.m_grade)
{
    std::cout << "Bureaucrat copy constructor" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor constructor" << std::endl;
}

const std::string& Bureaucrat::getName() const
{
    return m_name;
}

unsigned int Bureaucrat::getGrade() const
{
    return m_grade;
}

void Bureaucrat::setGrade(unsigned int _grade)
{
    if (_grade > 150)
    {
        throw Bureaucrat::GradeTooLowException();  
    }
    else if (_grade < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    else
    {
        m_grade = _grade; 
    }        
}

void Bureaucrat::decrease()
{
    setGrade(m_grade + 1);    
}

void Bureaucrat::increase()
{
    setGrade(m_grade - 1);
}

void Bureaucrat::signForm(AForm& _form) const
{
    try
    {
        _form.beSigned(*this);
        std::cout << "bureaucrat : " << m_name <<  " signed "      << _form.getName() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << "bureaucrat : " << m_name  << " cannot sign " << _form.getName() << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(const AForm& form) const
{
    try
    {
        form.execute(*this);
        std::cout << m_name << " executed " << form.getName();
    }
    catch (std::exception& e)
    {
        std::cout << "Execption : " << e.what() << std::endl;        
    }
    
}


const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Exception: gradeTooHighException grade too higher";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Exception: gradeTooLowException grade too lower";
}

std::ostream& operator<<(std::ostream& _out, const Bureaucrat& _bureaucrat)
{
    // TODO: 여기에 return 문을 삽입합니다.
    _out << _bureaucrat.getName() << ", " << " bureaucrat grade " << _bureaucrat.getGrade() << ".";
    return _out;
}