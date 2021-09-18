#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    // LEAKS TESTS
    std::cout << "Leaks Test" << std::endl;
    {
        const Animal* i = new Dog();
        const Animal* j = new Cat();
        delete i;
        delete j;
    }
    std::cout << std::endl;

    // ARRAY TEST
    std::cout << "Array Test" << std::endl;
    {
        Animal* array[4];

        for (size_t i = 0; i < 2; i++)
            array[i] = new Dog();
        for (size_t i = 2; i < 4; i++)
            array[i] = new Cat();
        for (size_t i = 0; i < 4; i++)
            array[i]->makeSound();
        for (size_t i = 0; i < 4; i++)
            delete array[i];
    }
    std::cout << std::endl;

    // DEEP COPY TEST
    std::cout << "Deep Copy Test" << std::endl;
    {
        Brain   firstBrain;

        firstBrain.setAnIdea(0, "First idea  : eat");
        firstBrain.setAnIdea(1, "Second idea : drink");
        firstBrain.setAnIdea(2, "Third idea  : think");

        firstBrain.printIdeas(3);
        Dog snoopy(firstBrain);
        Dog milou(snoopy);

        snoopy.printAddr();
        milou.printAddr();

        snoopy.printIdeas(3);
        milou.printIdeas(3);
        snoopy.setAnIdea(0, "First idea  : sleep");
        snoopy.setAnIdea(1, "Second idea : sleep");
        snoopy.setAnIdea(2, "Third idea  : sleep");
        milou.setAnIdea(0, "First idea  : investigate");
        milou.setAnIdea(1, "Second idea : investigate");
        milou.setAnIdea(2, "Third idea  : investigate");
        firstBrain.printIdeas(3);
        snoopy.printIdeas(3);
        milou.printIdeas(3);
    }



    return 0;
}