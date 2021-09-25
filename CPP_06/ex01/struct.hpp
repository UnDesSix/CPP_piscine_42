#ifndef __STRUCT
# define __STRUCT

class   Data
{
    public:
        Data();
        Data(Data const &copy);
        ~Data();

        Data&   operator=(Data const &rhs);

        void    setValue(int value);
        int     getValue(void) const;

    private:
        int _value;
};

#endif