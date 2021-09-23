#ifndef __BUREAUCRAT
# define __BUREAUCRAT

# include <exception>
# include <string>
# include <iostream>
# include <fstream>

# define SIGNED     true
# define UNSIGNED   false

# define GRADE_MAX 1
# define GRADE_MIN 150

class   AForm;

class   Bureaucrat
{
    public:
        Bureaucrat();
        Bureaucrat(std::string const &name, int grade);
        Bureaucrat(Bureaucrat const &src);

        ~Bureaucrat();

        Bureaucrat& operator=(Bureaucrat const &rhs);
        
        int                 getGrade(void) const;
        std::string const   getName(void) const;

        void    getPromotion(void);
        void    getDemotion(void);
        void    signForm(AForm &AForm) const;
        void    executeForm(AForm const &AForm) const;
    
    private:
        std::string const   _name;
        int                 _grade;

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

};

std::ostream& operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif