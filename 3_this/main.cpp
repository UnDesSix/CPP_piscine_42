#include "Sample.class.hpp"
#include <iostream>

int		main(void) {

	Sample	instance;

	instance.foo = 42;
	std::cout << "Variable instance.foo = " << instance.foo << std::endl;
	instance.bar();
	return (0);
}
