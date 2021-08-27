#include "Karen.hpp"

int main(void)
{
    Karen tester;

    tester.complain("DEBUG");
    tester.complain("oups");
    tester.complain("INFO");
    tester.complain("oups");
    tester.complain("WARNING");
    tester.complain("oups");
    tester.complain("ERROR");
    tester.complain("oups");
}