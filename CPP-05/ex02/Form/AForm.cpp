#include "AForm.hpp"

bool AForm::isHigherGrade(int burGrade, int limit) const { return !(burGrade >= limit);}
bool AForm::isLowerGrade(int burGrade, int limit) const { return !(burGrade <= limit);}

const char* AForm::GradeTooHighException::what() const throw(){ return ("Grade too high!");}
const char* AForm::GradeTooLowException::what() const throw(){ return ("Grade too low!");}

AForm::AForm(std::string name, int to_sign, int to_exec)
: _name(name), _signed(false), _grade_to_sign(to_sign), _grade_to_exec(to_exec)
{
	if (isHigherGrade(_grade_to_exec, 1) || isHigherGrade(_grade_to_sign, 1))
		throw GradeTooHighException();
	if (isLowerGrade(_grade_to_exec, 150) || isLowerGrade(_grade_to_sign, 150))
		throw GradeTooLowException();
}

AForm::~AForm() {std::cout << _name << " is closed.\n";}


int AForm::beSigned(Bureaucrat &bur)
{
	// if (&bur == NULL)
	// 	return 0;
	if (isSigned())
		return 0; 
	if (AForm::isLowerGrade(bur.getGrade(), _grade_to_sign))
	{
		throw GradeTooLowException();
		return 0;
	}
	_signed = true;
	return 1;
}

int AForm::execute(Bureaucrat const &bur) const 
{
	// if (&bur == NULL)
	// 	return 0;
	if (!isSigned())
		return 0; 
	if (AForm::isLowerGrade(bur.getGrade(), _grade_to_exec))
	{
		throw GradeTooLowException();
		return 0;
	}
	return 1;
}

AForm& AForm::operator=(AForm const &src)
{
	if (this != &src)
	{
		_signed = src.isSigned();
	}
	return *this;
}

std::ostream &operator<<(std::ostream &o, AForm&src)
{
	   o << src.getName() << ", grade needed to sign : " << src.getGradeToSign() 
			<< "and grade needed to execute : " << src.getGradeToExecute() << "." << std::endl;
    return o;
}


const std::string AForm::getName() const {return _name;}

bool AForm::isSigned() const {return _signed;}

int AForm::getGradeToSign() const {return _grade_to_sign;}

int AForm::getGradeToExecute() const {return _grade_to_exec;}
