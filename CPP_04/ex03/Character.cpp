#include "Character.hpp"
#include "AMateria.hpp"

/*
** ---------------- CONSTRUCTORS ----------------
*/
Character::Character() : _name("default"), _inventory(new AMateria*[INV_SIZE])
{
    for (size_t i = 0; i < INV_SIZE; i++)
        this->_inventory[i] = NULL;
}

Character::Character(std::string const &name) : _name(name), _inventory(new AMateria*[INV_SIZE])
{
    for (size_t i = 0; i < INV_SIZE; i++)
        this->_inventory[i] = NULL;
}

Character::Character(Character const &copy) : _name(copy._name), _inventory(new AMateria*[INV_SIZE])
{
    for (size_t i = 0; i < INV_SIZE; i++)
        this->_inventory[i] = copy._inventory[i]->clone();
}

/*
** ---------------- DESTRUCTOR ----------------
*/
Character::~Character()
{
    for (size_t i = 0; i < INV_SIZE; i++)
    {
        if (this->_inventory[i] != NULL)
            delete _inventory[i];
    }
    delete [] this->_inventory;
}

/*
** ---------------- OVERLOADS ----------------
*/
Character&  Character::operator=(Character const &rhs)
{
    if (this != &rhs)
    {
        for (size_t i = 0; i < INV_SIZE; i++)
        {
            if (this->_inventory[i] != NULL)
                delete this->_inventory[i];
            this->_inventory[i] = rhs._inventory[i]->clone();
        }
    }
    return *this;
}

/*
** ---------------- METHODS ----------------
*/

void                Character::equip(AMateria* m)
{
    for (size_t i = 0; i < INV_SIZE; i++)
    {
        if (this->_inventory[i] == NULL)
        {
            this->_inventory[i] = m;
            return ;
        }
    }
}

void                Character::unequip(int idx)
{
    if (idx < INV_SIZE && this->_inventory[idx] != NULL)
        this->_inventory[idx] = NULL;
}

void                Character::use(int idx, ICharacter& target)
{
    if (idx < INV_SIZE && _inventory[idx] != NULL)
        this->_inventory[idx]->use(target);
}

/*
** ---------------- ACCESSOR ----------------
*/
std::string const&  Character::getName(void) const
{
    return this->_name;
}