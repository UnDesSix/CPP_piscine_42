#ifndef __FORM
# define __FORM

# include "Bureaucrat.hpp"

class   Form
{
    public:
        Form();
        Form(std::string const &name, int signGrade, int execGrade);
        Form(Form const &src);
        ~Form();

        Form& operator=(Form const &rhs);

        void    beSigned(Bureaucrat const &bureaucrat);

        std::string const   getName(void) const;
        bool                getState(void) const;
        int                 getSignGrade(void) const;
        int                 getExecGrade(void) const;
    
        void                setState(bool const &state);

    private:
        std::string const   _name;
        bool                _state;
        int const           _signGrade;
        int const           _execGrade;

        class   GradeTooHighException : public std::exception
        {
            virtual const char*  what() const throw();
        };
        class   GradeTooLowException : public std::exception
        {
            virtual const char* what() const throw();
        };
};

std::ostream&   operator<<(std::ostream &o, Form const &rhs);

#endif