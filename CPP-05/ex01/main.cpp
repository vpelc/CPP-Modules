#include "../Bureaucrat/Bureaucrat.hpp"
#include "../Form/Form.hpp"

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

        std::cout << "Forms" << std::endl;

        Form f1("Important form", 5, 3);
        Form f2("Classic form", 150, 150);
        // Form f3("Divine form", -1, -2);
        // Form f4("Garbage form", 164, 153);

        b3.signForm(f2);
        b1.signForm(f2);
        
        b1.signForm(f1);
        b3.signForm(f1);
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
}