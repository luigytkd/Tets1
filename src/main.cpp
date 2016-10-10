#include <iostream>
#include <vector>

void doSomeCpp11Stuff()
{
	std::vector<std::string> names = { "xyzzy", "plugh", "abracadabra" };

	std::cout << "going to print names:"<<std::endl;
	for (auto& name : names)
	{
		std::cout << name << ", ";
	}

	std::cout << std::endl;
}


int main()
{

	doSomeCpp11Stuff();
	std::cout<<"yeahhhh"<<std::endl;
	return 0;
}