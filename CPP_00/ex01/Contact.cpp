#include "Contact.hpp"

Contact::Contact()
{
    
}

Contact::Contact(int index, std::string firstName, std::string lastName,
std::string nickname, std::string phoneNumber, std::string darkestSecret) :
m_index (index), m_firstName(firstName), m_lastName(lastName),
m_nickname(nickname), m_phoneNumber(phoneNumber), m_darkestSecret(darkestSecret) 
{

}

Contact::~Contact()
{

}

void Contact::createCard(int const& index)
{
    m_index = index;
    std::cout << "First Name: ";
    std::getline(std::cin, m_firstName);
    std::cout << "Last Name: ";
    std::getline(std::cin, m_lastName);
    std::cout << "Nickname: ";
    std::getline(std::cin, m_nickname);
    std::cout << "Phone Number: ";
    std::getline(std::cin, m_phoneNumber);
    std::cout << "Darkest Secret: ";
    std::getline(std::cin, m_darkestSecret);
}

void Contact::displayContactsList(void) const
{
    std::string finalContent;

    finalContent = "         ";
    finalContent += m_index + 48;
    finalContent += "|";
    std::cout << finalContent;
    displayCell(m_firstName, true);
    displayCell(m_lastName, true);
    displayCell(m_nickname, false);
    std::cout << std::endl;
}

void Contact::displayCard(void) const
{
    std::cout << "First Name     : ";
    std::cout << m_firstName << std::endl;
    std::cout << "Last Name      : ";
    std::cout << m_lastName << std::endl;
    std::cout << "Nickname       : ";
    std::cout << m_nickname << std::endl;
    std::cout << "Phone Number   : ";
    std::cout << m_phoneNumber << std::endl;
    std::cout << "Darkest Secret : ";
    std::cout << m_darkestSecret << std::endl;
}

void displayCell(std::string const& value, bool separator)
{
    int strlen(value.length());
    std::string finalContent;

    if (strlen < 10)
    {
        for (int i(0); i < 10 - strlen; i++)
            finalContent += ' ';
        finalContent.append(value, 0, strlen);
    }
    else if (strlen == 10)
        finalContent += value;
    else
    {
        finalContent += value.substr(0, 9);
        finalContent += '.';
    }
    if (separator)   
        finalContent += '|';
    std::cout << finalContent;
}