#include "PresidentialPardonForm.hpp"

static const std::string	_const_name 			= "Presidential Pardon";
static const int			_const_grade_to_sign 	= 25;
static const int			_const_grade_to_exec 	= 5;

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: AForm(_const_name, _const_grade_to_sign, _const_grade_to_exec), _target(target) 
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
: AForm(copy.getName(), copy.getGradeToSign(), copy.getGradeToExecute()), _target(copy.getTarget())
{} 

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
	if (this != &src)
		_target = src.getTarget();
	return *this;
}

std::ostream &operator<<(std::ostream &o, PresidentialPardonForm &src)
{
	   o << src.getName() << ", grade needed to sign : " << src.getGradeToSign() 
			<< "and grade needed to execute : " << src.getGradeToExecute() << "." << std::endl;
    return o;
}

int	PresidentialPardonForm::execute(Bureaucrat const &bur) const
{
	// if (&bur == NULL)
	// 	return 0;
	if (!isSigned())
		return 0;
	if (bur.getGrade() < AForm::getGradeToExecute())
	{
		throw AForm::GradeTooLowException();
		return 0;
	}
	std::cout << _target << " has been pardoned by Zaphod Beeblerox" << std::endl;
	return 1;
}

std::string PresidentialPardonForm::getTarget( void ) const { return _target;}