#include "Intern.hpp"

static const std::string _form_names[] = {"presidential pardon", "robotomy request", "shrubbery creation"}; 

Intern::Intern() {}

Intern::Intern(const Intern &copy) { (void)copy;}

Intern::~Intern() {}

const char *Intern::InvalidFormNameException::what() const throw()
{
    return ("Invalid form name!");
}

Intern &Intern::operator=(Intern const &src) { (void) src; return *this; }

void nameToLower(std::string &name)
{
	for (size_t i = 0; i < name.length(); i++)
	{
		name[i] = tolower(name[i]);
	}
}

AForm *Intern::makeForm(std::string formName, std::string target)
{
	int i = 0;
	int size = sizeof(_form_names) / sizeof(_form_names[0]);
	AForm *form;
	
	nameToLower(formName);
	while (i < size && _form_names[i].compare(formName) != 0)
		i++;
	// i++;
	switch (i)
	{
		case 0:
			form = new PresidentialPardonForm(target);
			break;
		case 1:
			form = new RobotomyRequestForm(target);
			break;
		case 2:
			form = new ShrubberyCreationForm(target);
			break;
		default:
			throw InvalidFormNameException();
			break;
	}

	std::cout << "Intern creates " << formName << std::endl;
	return form;
}

