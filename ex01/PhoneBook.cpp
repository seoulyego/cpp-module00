#include "PhoneBook.hpp"

void	PhoneBook::add_contact(void) {
	this->contacts[index % 8].add_contact();
	this->index++;
}

void	PhoneBook::search_contact(void) {
	;
}