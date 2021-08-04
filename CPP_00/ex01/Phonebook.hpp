#ifndef __PHONEBOOK
# define __PHONEBOOK
# include <string>
# include "Contact.hpp"
# define CONTACT_NB 8

class Phonebook
{
    public:
    Phonebook();
    ~Phonebook();
    void add(void);
    void search(void);

    private:
    int m_oldestIndex;
    int m_totalContact;
    Contact m_contact[CONTACT_NB];

};

#endif