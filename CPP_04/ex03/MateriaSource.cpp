#include "MateriaSource.hpp"

/*
** ---------------- CONSTRUCTORS ----------------
*/
MateriaSource::MateriaSource() : _source(new AMateria* [SOURCE_SIZE])
{
    for (size_t i = 0; i < SOURCE_SIZE; i++)
        this->_source[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &src) : _source(new AMateria* [SOURCE_SIZE])
{
    for (size_t i = 0; i < SOURCE_SIZE; i++)
        this->_source[i] = src._source[i]->clone();
}

/*
** ---------------- DESTRUCTOR ----------------
*/
MateriaSource::~MateriaSource()
{
    for (size_t i = 0; i < SOURCE_SIZE; i++)
        if (this->_source[i] != NULL)
            delete this->_source[i];
    delete [] this->_source;
}

/*
** ---------------- OVERLOADS ----------------
*/
MateriaSource&  MateriaSource::operator=(MateriaSource const &rhs)
{
    if (this != &rhs)
    {
        for (size_t i = 0; i < SOURCE_SIZE; i++)
        {
            if (this->_source[i] != NULL)
                delete this->_source[i];
            this->_source[i] = rhs._source[i]->clone();
        }
    }
    return *this;
}

/*
** ---------------- METHODS ----------------
*/
void        MateriaSource::learnMateria(AMateria* m)
{
    for (size_t i = 0; i < SOURCE_SIZE; i++)
    {
        if (this->_source[i] == NULL)
        {
            this->_source[i] = m;
            return ;
        }
    }

}

AMateria*   MateriaSource::createMateria(std::string const & type)
{
    for (size_t i = 0; i < SOURCE_SIZE; i++)
    {
        if (this->_source[i] != NULL && this->_source[i]->getType() == type)
            return this->_source[i]->clone();
    }
    return NULL;
}