#ifndef __AFORM
# define __AFORM

# include "Bureaucrat.hpp"

class   AForm
{
    public:
        AForm();
        AForm(std::string const &name, int signGrade, int execGrade, std::string const &target);
        AForm(AForm const &src);
        virtual ~AForm();

        AForm& operator=(AForm const &rhs);

        void    beSigned(Bureaucrat const &bureaucrat);

        std::string const   getName(void) const;
        bool                getState(void) const;
        int                 getSignGrade(void) const;
        int                 getExecGrade(void) const;
        std::string const   getTarget(void) const;
    
        void                setState(bool const &state);

        void                checkForm(Bureaucrat const &bureaucrat, int const &gradeRequired) const;
        virtual void        execute(Bureaucrat const &bureaucrat) const = 0;

        class   GradeTooHighException : public std::exception
        {
            virtual const char*  what() const throw();
        };
        class   GradeTooLowException : public std::exception
        {
            virtual const char* what() const throw();
        };
        class   FormNotSignedException : public std::exception
        {
                virtual const char*   what() const throw();
        };
        class   CouldNotOpenException : public std::exception
        {
            public:
                virtual const char*   what() const throw();
        };

    private:
        std::string const   _name;
        bool                _state;
        int const           _signGrade;
        int const           _execGrade;
        std::string const   _target;
};

std::ostream&   operator<<(std::ostream &o, AForm const &rhs);

#endif