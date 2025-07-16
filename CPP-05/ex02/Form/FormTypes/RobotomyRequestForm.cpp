#include "RobotomyRequestForm.hpp"
#include <cstdlib>

static const std::string	_const_name 			= "Robotomy Request";
static const int			_const_grade_to_sign 	= 72;
static const int			_const_grade_to_exec 	= 45;


RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: AForm(_const_name, _const_grade_to_sign, _const_grade_to_exec), _target(target) 
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
: AForm(copy.getName(), copy.getGradeToSign(), copy.getGradeToExecute()), _target(copy.getTarget())
{} 

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
	if (this != &src)
		_target = src.getTarget();
	return *this;
}

std::ostream &operator<<(std::ostream &o, RobotomyRequestForm &src)
{
	   o << src.getName() << ", grade needed to sign : " << src.getGradeToSign() 
			<< "and grade needed to execute : " << src.getGradeToExecute() << "." << std::endl;
    return o;
}

int	RobotomyRequestForm::execute(Bureaucrat const &bur) const
{
	// if (&bur == NULL)
	// 	return 0;
	if (!isSigned())
	{
		std::cout << "Cannot be executed, it is not signed" << std::endl;
		return 0;
	}
	if (bur.getGrade() < AForm::getGradeToExecute())
	{
		throw AForm::GradeTooLowException();
		return 0;
	}
	std::cout << _target << " zzzzt zzzzt vrrbrrr buzzz whiiir " << std::endl;
	srand(time(0));
	int	rdm_nbr = rand() % 2;
	if (rdm_nbr == 0)
		std::cout << "Robotomy failed!" << std::endl;
	else
		std::cout << "Robotomy successful!" << std::endl;
	return 1;
}

std::string RobotomyRequestForm::getTarget( void ) const { return _target;}