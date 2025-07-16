#include "Form.hpp"
#include "../Bureaucrat/Bureaucrat.hpp"

bool Form::isHigherGrade(int burGrade, int limit) { return !(burGrade >= limit);}
bool Form::isLowerGrade(int burGrade, int limit) { return !(burGrade <= limit);}

const char* Form::GradeTooHighException::what() const throw(){ return ("Grade too high!");}
const char* Form::GradeTooLowException::what() const throw(){ return ("Grade too low!");}

Form::Form(std::string name, int to_sign, int to_exec)
: _name(name), _signed(false), _grade_to_sign(to_sign), _grade_to_exec(to_exec)
{
	if (isHigherGrade(_grade_to_exec, 1) || isHigherGrade(_grade_to_sign, 1))
		throw GradeTooHighException();
	if (isLowerGrade(_grade_to_exec, 150) || isLowerGrade(_grade_to_sign, 150))
		throw GradeTooLowException();
}

Form::Form(const Form& copy) : _name(copy.getName()),
	_grade_to_sign(copy.getGradeToSign()), _grade_to_exec(copy.getGradeToExecute()){}

Form::~Form() {std::cout << _name << " is closed.\n";}

int Form::beSigned(Bureaucrat &bur)
{
	// if (&bur == NULL)
	// 	return 0;
	if (isSigned())
		return 0; 
	if (isLowerGrade(bur.getGrade(), _grade_to_sign))
	{
		throw GradeTooLowException();
		return 0;
	}
	_signed = true;
	return 1;
}

Form& Form::operator=(Form const &src)
{
	if (this != &src)
	{
		_signed = src.isSigned();
	}
	return *this;
}

std::ostream &operator<<(std::ostream &o, Form&src)
{
	   o << src.getName() << ", grade needed to sign : " << src.getGradeToSign() 
			<< "and grade needed to execute : " << src.getGradeToExecute() << "." << std::endl;
    return o;
}


const std::string Form::getName() const {return _name;}

bool Form::isSigned() const {return _signed;}

int Form::getGradeToSign() const {return _grade_to_sign;}

int Form::getGradeToExecute() const {return _grade_to_exec;}
