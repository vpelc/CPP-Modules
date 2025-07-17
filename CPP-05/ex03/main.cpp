#include "Bureaucrat/Bureaucrat.hpp"
#include "Form/AForm.hpp"
#include "Form/FormTypes/PresidentialPardonForm.hpp"
#include "Form/FormTypes/RobotomyRequestForm.hpp"
#include "Form/FormTypes/ShrubberyCreationForm.hpp"
#include "Intern/Intern.hpp"


int main()
{
    try
    {
        Bureaucrat b1("Bob", 3);
        std::cout << "Let's welcome " << b1 << std::endl;
        // Bureaucrat b2("Bernadette", -3);
        // std::cout << "Let's welcome " << b2 << std::endl;
        Bureaucrat b3("Jack", 149);
        std::cout << "Let's welcome " << b3 << std::endl;
        // Bureaucrat b4("Bill", 158);
        // std::cout << "Let's welcome " << b4 << std::endl;
        
        b1.incrementGrade();
        b3.decrementGrade();
        
        b1.incrementGrade();
        // b1.incrementGrade();
        // b3.decrementGrade();

        // std::cout << "Forms" << std::endl;

        // AForm *f1 = new PresidentialPardonForm("Josh");
        // AForm *f2 = new RobotomyRequestForm("Paul");
        // AForm *f3 = new ShrubberyCreationForm("Nathan");

        Intern i1;

        AForm *f1 = i1.makeForm("presidEntial pardon", "Josh");
        AForm *f2 = i1.makeForm("robotoMy request", "Paul");
        AForm *f3 = i1.makeForm("shrubBery creation", "Nathan");
        
        // AForm *f4 = i1.makeForm("insane initialisation", "Nathan");
        

        // b3.signForm(*f2);
        b1.signForm(*f2);
        
        // b3.signForm(*f1);
        b1.signForm(*f1);
        
        // b3.signForm(*f3);
        b1.signForm(*f3);
        
        // b1.signForm(*f4);

        b1.executeForm(*f1);

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
}