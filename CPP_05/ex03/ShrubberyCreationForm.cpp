#include "ShrubberyCreationForm.hpp"

/*
** ---------------- CONSTRUCTORS ----------------
*/
ShrubberyCreationForm::ShrubberyCreationForm() : AForm()
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : AForm("Shrubbery Creation", SIGN_GRADE_SH, EXEC_GRADE_SH, target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm(src)
{}

/*
** ---------------- DESTRUCTOR ----------------
*/
ShrubberyCreationForm::~ShrubberyCreationForm()
{}

/*
** ---------------- OVERLOADS ----------------
*/
ShrubberyCreationForm&  ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
    if (this != &rhs)
        this->AForm::operator=(rhs);
    return *this;
}

/*
** ---------------- METHOD ----------------
*/
void        ShrubberyCreationForm::execute(Bureaucrat const &bureaucrat) const
{
    std::ofstream   outputFile;
    std::string     fileName(this->getTarget() + "_shrubbery");

    try
    {
        this->checkForm(bureaucrat, EXEC_GRADE_SH);
    }
    catch(const std::exception& e)
    {
        throw ;
        return ;
    }
    try
    {
        outputFile.open(fileName.c_str());
        if (outputFile.good() == false)
        {
            throw AForm::CouldNotOpenException();
            return ;
        }
    }
    catch(const std::exception& e)
    {
        throw ;
        return ;
    }
    outputFile << "                                              ." << std::endl;
    outputFile << "                                   .         ;" << std::endl;
    outputFile << "      .              .              ;%     ;;" << std::endl;
    outputFile << "        ,           ,                :;%  %;" << std::endl;
    outputFile << "         :         ;                   :;%;'     .," << std::endl;
    outputFile << ",.        %;     %;            ;        %;'    ,;" << std::endl;
    outputFile << "  ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
    outputFile << "   %;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl;
    outputFile << "    ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
    outputFile << "     `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
    outputFile << "      `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
    outputFile << "         `:%;.  :;bd%;          %;@%;'" << std::endl;
    outputFile << "           `@%:.  :;%.         ;@@%;'" << std::endl;
    outputFile << "             `@%.  `;@%.      ;@@%;" << std::endl;
    outputFile << "               `@%%. `@%%    ;@@%;" << std::endl;
    outputFile << "                 ;@%. :@%%  %@@%;" << std::endl;
    outputFile << "                   %@bd%%%bd%%:;" << std::endl;
    outputFile << "                     #@%%%%%:;;" << std::endl;
    outputFile << "                     %@@%%%::;" << std::endl;
    outputFile << "                     %@@@%(o);  . '" << std::endl;
    outputFile << "                     %@@@o%;:(.,'" << std::endl;
    outputFile << "                 `.. %@@@o%::;" << std::endl;
    outputFile << "                    `)@@@o%::;" << std::endl;
    outputFile << "                     %@@(o)::;" << std::endl;
    outputFile << "                    .%@@@@%::;" << std::endl;
    outputFile << "                    ;%@@@@%::;." << std::endl;
    outputFile << "                   ;%@@@@%%:;;;." << std::endl;
    outputFile << "               ...;%@@@@@%%:;;;;,.." << std::endl;
    outputFile.close();
}