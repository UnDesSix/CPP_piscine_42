#ifndef __ROBOTOMYREQUESTFORM
# define __ROBOTOMYREQUESTFORM

# include "AForm.hpp"
# include <cstdlib>
# include <ctime>

# define SIGN_GRADE_RO  72
# define EXEC_GRADE_RO  45

class   RobotomyRequestForm : public AForm
{
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string const &target);
        RobotomyRequestForm(RobotomyRequestForm const &src);
        virtual ~RobotomyRequestForm();

        virtual void        execute(Bureaucrat const &bureaucrat) const;

    private:
        RobotomyRequestForm&  operator=(RobotomyRequestForm const &rhs);
};

#endif