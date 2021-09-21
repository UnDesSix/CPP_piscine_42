#ifndef __SHRUBBERYCREATIONFORM
# define __SHRUBBERYCREATIONFORM

# include "AForm.hpp"

# define SIGN_GRADE_SH  145
# define EXEC_GRADE_SH  137

class   ShrubberyCreationForm : public AForm
{
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string const &target);
        ShrubberyCreationForm(ShrubberyCreationForm const &src);
        virtual ~ShrubberyCreationForm();

        ShrubberyCreationForm&  operator=(ShrubberyCreationForm const &rhs);

        virtual void        execute(Bureaucrat const &bureaucrat) const;

    private:
};

#endif
