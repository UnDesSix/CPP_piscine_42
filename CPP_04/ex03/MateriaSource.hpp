#ifndef __MATERIASOURCE
# define __MATERIASOURCE

# include <iostream>
# include <string>
# include "IMateriaSource.hpp"

# define SOURCE_SIZE 4

class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource();
        MateriaSource(MateriaSource const &src);
        virtual ~MateriaSource();
        MateriaSource&  operator=(MateriaSource const &rhs);

        virtual void        learnMateria(AMateria* m);
        virtual AMateria*   createMateria(std::string const & type);

    private:
        AMateria**  _source;
};

#endif