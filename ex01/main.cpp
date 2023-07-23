#include "PhoneBook.hpp"
#include <iostream>

int main() {
	PhoneBook	phone_book;
	std::string	command;

	while (true) {
		std::cout << "(system) Enter a command(ADD, SEARCH, EXIT) : ";
		std::getline(std::cin, command);
		if (std::cin.eof()) {
			std::cout << std::endl;
			break ;
		}
		if (command == "ADD")
			phone_book.addContact();
		else if (command == "SEARCH")
			phone_book.searchContact();
		else if (command == "EXIT")
			break ;
		else
			std::cout << "(system) Wrong command entered" << std::endl;
		std::cout << std::endl;
	}
	return 0;
}
