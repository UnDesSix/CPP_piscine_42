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
    int index(-1);
    std::string strIndex;
    std::string const correctIndexes[] = {"0", "1", "2", "3", "4", "5", "6", "7"};

    std::cout << std::endl <<  "============ Searching contact ============" << std::endl;    
    std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
    for (int i(0); i < m_totalContact; i++)
        m_contact[i].displayContactsList();
    std:: cout << "Enter an index: ";
    if (!std::getline(std::cin, strIndex))
        return;
    for (int i(0); i < m_totalContact; i++)
        if (strIndex.compare(correctIndexes[i]) == 0)
            index = strIndex[0] - 48;
    if (index == -1)
        std::cout << "Wrong index." << std::endl;
    else
        m_contact[index].displayCard();
    return;
}