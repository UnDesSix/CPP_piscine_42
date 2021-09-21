#ifndef __PRESIDENTIALPARDONFORM
# define __PRESIDENTIALPARDONFORM

# include "AForm.hpp"

# define SIGN_GRADE_PR  25
# define EXEC_GRADE_PR  5

class   PresidentialPardonForm : public AForm
{
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string const &target);
        PresidentialPardonForm(PresidentialPardonForm const &src);
        virtual ~PresidentialPardonForm();

        virtual void        execute(Bureaucrat const &bureaucrat) const;

    private:
        PresidentialPardonForm&  operator=(PresidentialPardonForm const &rhs);
};

#endif