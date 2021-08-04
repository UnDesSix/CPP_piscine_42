#ifndef __CONTACT
# define __CONTACT
# include <string>
# include <iostream>

class Contact
{
    public:
    Contact();
    Contact(int index, std::string firstName, std::string lastName,
    std::string nickname, std::string phoneNumber, std::string darkestSecret);
    ~Contact();
    void createCard(int const& index);
    void displayContactsList(void) const;
    void displayCard(void) const;

    private:
    int m_index;
    std::string m_firstName;
    std::string m_lastName;
    std::string m_nickname;
    std::string m_phoneNumber;
    std::string m_darkestSecret;
};

void displayCell(std::string const& value, bool separator);

#endif