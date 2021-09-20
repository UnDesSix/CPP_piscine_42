#ifndef __BUREAUCRAT
# define __BUREAUCRAT

#include <exception>
#include <string>
#include <iostream>

class   Bureaucrat
{
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat const &src);
        ~Bureaucrat();
        Bureaucrat& operator=(Bureaucrat const &rhs);
        
        int const           getGrade(void) const;
        std::string const   getName(void) const;

        void    getPromotion(void);
        void    getDemotion(void);

        class   GradeTooHighException : public std::exception
        {
            public:
                virtual const char*   what() const throw();
        };
        class   GradeTooLowException : public std::exception
        {
            public:
                virtual const char*   what() const throw();
        };
    
    private:
        std::string const   _name;
        int                 _grade;
    
};

std::iostream& operator<<(std::iostream &o, Bureaucrat const &src);

#endif