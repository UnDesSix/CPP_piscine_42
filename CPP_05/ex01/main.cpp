#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat  nasser("Nasser Al-Helaifi", 1);
    Bureaucrat  leonardo("Leonardo", 2);
    Bureaucrat  pochettino("Pochettino", 5);
    Bureaucrat  gardener("PSG gardener", 100);
    Bureaucrat  steward("Steward", 150);

    Form        messiContract("Messi's contract", 1, 1);
    Form        mbappeContract("M'Bappe's contract", 3, 3);
    Form        newGrass("new grass command", 100, 100);

    std::cout << "------NASSER-----" << std::endl;
    nasser.signForm(messiContract);
    nasser.signForm(mbappeContract);
    nasser.signForm(newGrass);
    std::cout << "------LEONARDO-----" << std::endl;
    leonardo.signForm(messiContract);
    leonardo.signForm(mbappeContract);
    leonardo.signForm(newGrass);
    std::cout << "------POCHETTINO-----" << std::endl;
    pochettino.signForm(messiContract);
    pochettino.signForm(mbappeContract);
    pochettino.signForm(newGrass);
    std::cout << "------GARDENER-----" << std::endl;
    gardener.signForm(messiContract);
    gardener.signForm(mbappeContract);
    gardener.signForm(newGrass);
    std::cout << "------STEWARD-----" << std::endl;
    steward.signForm(messiContract);
    steward.signForm(mbappeContract);
    steward.signForm(newGrass);

    try
    {
        Form    test("Test", 0, 1);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Form    test2("Test", 10, 160);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}