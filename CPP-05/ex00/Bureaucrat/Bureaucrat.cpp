#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooHighException::what() const throw(){ return ("Grade too high!");}
const char* Bureaucrat::GradeTooLowException::what() const throw(){ return ("Grade too low!");}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    if (_grade > 150)
        throw GradeTooHighException();
    if (_grade < 1)
		throw GradeTooLowException();		
	std::cout << _name << " joined the company!\n";
}
Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy.getName()), _grade(copy.getGrade()){}

Bureaucrat::~Bureaucrat() {std::cout << _name << " left the company...\n";}


void Bureaucrat::incrementGrade()
{
	_grade--;
    std::cout << _name << " got a promotion!\n";
	if (_grade < 1)
		throw GradeTooHighException();
}
void Bureaucrat::decrementGrade() 
{
	_grade++;
	std::cout << _name << " got demoted...\n";
	if (_grade > 150)
		throw GradeTooLowException();
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src)
{
    if (&src != this)
        _grade = src.getGrade();
    return *this;
}

std::ostream &operator<<(std::ostream &o, Bureaucrat &src)
{
    o << src.getName() << ", bureaucrat grade "
                << src.getGrade() << "." << std::endl;
    return o;
}



// Getter
const std::string Bureaucrat::getName() const { return _name;} 
int Bureaucrat::getGrade() const { return _grade;} 