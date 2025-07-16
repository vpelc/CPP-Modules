#include "Bureaucrat/Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b1("Bob", 3);
        std::cout << "Let's welcome " << b1 << std::endl;
        Bureaucrat b2("Bernadette", -3);
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
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
}