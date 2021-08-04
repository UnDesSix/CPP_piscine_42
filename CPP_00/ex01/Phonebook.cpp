#include "Phonebook.hpp"

Phonebook::Phonebook() : m_oldestIndex(0), m_totalContact(0)
{
    
}

Phonebook::~Phonebook()
{

}

void Phonebook::add(void)
{
    std::cout << std::endl <<  "============ Adding new contact ===========" << std::endl;    
   
    if (m_totalContact < CONTACT_NB)
    {
        m_contact[m_totalContact].createCard(m_totalContact);
    }
    else
    {
        m_contact[m_oldestIndex].createCard(m_oldestIndex);
        m_oldestIndex++;
        if (m_oldestIndex > CONTACT_NB - 1)
            m_oldestIndex = 0;
    }
    m_totalContact++;
    if (m_totalContact > CONTACT_NB - 1)
        m_totalContact = CONTACT_NB;
}

void Phonebook::search(void)
{
    int index;
    std::string strIndex;
    std::cout << std::endl <<  "============ Searching contact ============" << std::endl;    
    std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
    for (int i(0); i < m_totalContact; i++)
        m_contact[i].displayContactsList();
    std:: cout << "Enter an index: ";
    std::getline(std::cin, strIndex);
    try
    {
        index = std::stoi(strIndex);
        if (strIndex.length() > 1 || index < 0 || index >= m_totalContact) {
            std::cout << "Wrong index." << std::endl;
        } else {
            m_contact[index].displayCard();
        }
    }
    catch(const std::invalid_argument& e)
    {
        std::cout << "Wrong index." << std::endl;
    }
    return;
}