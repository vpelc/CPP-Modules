#include "Bureaucrat/Bureaucrat.hpp"
#include "Form/AForm.hpp"
#include "Form/FormTypes/PresidentialPardonForm.hpp"
#include "Form/FormTypes/RobotomyRequestForm.hpp"
#include "Form/FormTypes/ShrubberyCreationForm.hpp"


int main()
{
    try
    {
        Bureaucrat b1("Bob", 3);
        std::cout << "Let's welcome " << b1 << std::endl;
        // Bureaucrat b2("Bernadette", -3);
        // std::cout << "Let's welcome " << b2 << std::endl;
        Bureaucrat b3("Beatrice", 149);
        std::cout << "Let's welcome " << b3 << std::endl;
        // Bureaucrat b4("Bill", 158);
        // std::cout << "Let's welcome " << b4 << std::endl;
        
        b1.incrementGrade();
        b3.decrementGrade();
        
        b1.incrementGrade();
        // b1.incrementGrade();
        // b3.decrementGrade();

        std::cout << "AForms" << std::endl;

        AForm *f1 = new PresidentialPardonForm("Josh");
        AForm *f2 = new RobotomyRequestForm("Paul");
        AForm *f3 = new ShrubberyCreationForm("Nath");

        // b3.signForm(*f2);
        b1.signForm(*f2);
        
        // b3.signForm(*f1);
        b1.signForm(*f1);
        
        // b3.signForm(*f3);
        b1.signForm(*f3);

        b1.executeForm(*f1);

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
}