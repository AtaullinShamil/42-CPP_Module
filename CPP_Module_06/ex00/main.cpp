#include "Conversion.hpp"

int main(int argc, char **argv)
{
	if (argc != 2){
		std::cout << "Bad arguments" << std::endl;
		return (1);
	}
	Conversion conf(argv[1]);
	conf.print();
	return (0);
}
