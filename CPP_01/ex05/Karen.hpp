#ifndef __KAREN
# define __KAREN
# include <iostream>
# include <string>

class Karen
{
    public:
        Karen();
        ~Karen();
        void    complain(std::string level) const;
    
    private:
        void    debug(void) const;
        void    info(void) const;
        void    warning(void) const;
        void    error(void) const;
};

#endif