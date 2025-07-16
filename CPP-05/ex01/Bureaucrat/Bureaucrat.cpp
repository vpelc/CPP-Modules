#include "Bureaucrat.hpp"

bool Bureaucrat::isHigherGrade(int burGrade, int limit) const { return !(burGrade >= limit);}
bool Bureaucrat::isLowerGrade(int burGrade, int limit) const { return !(burGrade <= limit);}

const char* Bureaucrat::GradeTooHighException::what() const throw(){ return ("Grade too high!");}
const char* Bureaucrat::GradeTooLowException::what() const throw(){ return ("Grade too low!");}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    if (isHigherGrade(_grade, 1))
        throw GradeTooHighException();
    if (isLowerGrade(_grade, 150))
		throw GradeTooLowException();		
	std::cout << _name << " joined the company!\n";
}
Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy.getName()), _grade(copy.getGrade()){}

Bureaucrat::~Bureaucrat() {std::cout << _name << " left the company...\n";}


void Bureaucrat::incrementGrade()
{
	_grade--;
    std::cout << _name << " got a promotion!\n";
	if (isHigherGrade(_grade, 1))
		throw GradeTooHighException();
}
void Bureaucrat::decrementGrade() 
{
	_grade++;
	std::cout << _name << " got demoted...\n";
	if (isLowerGrade(_grade, 150))
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


void Bureaucrat::signForm(Form &form)
{
	std::string reason = "";

	// if (&form == NULL)
	// 	return ;
	if (form.isSigned())
		reason = " the formis already signed.\n";
	if (isLowerGrade(_grade, form.getGradeToSign()))
		reason = " grade too low.\n";
	if (reason != "")
		std::cout << _name << " couldn\'t sign " << form.getName()
		<< " because" << reason;
	if (form.beSigned(*this))
		std::cout << _name << " signed " << form.getName() << std::endl;
}

// Getter
const std::string Bureaucrat::getName() const { return _name;} 
int Bureaucrat::getGrade() const { return _grade;} 