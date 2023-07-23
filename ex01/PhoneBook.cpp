#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook() {
	this->contact_index = 0;
	this->filled_contacts = 0;
}

void	PhoneBook::addContact(void) {
	Contact	&current_contact = contacts[contact_index % BOOK_SIZE];
	std::string	input;

	std::cout << "(system) Enter New Contact" << std::endl;

	std::cout << "First Name : ";
	std::getline(std::cin, input);
	if (std::cin.eof())
		std::exit(EXIT_FAILURE);
	if (input.size() == 0) {
		std::cout << "(system) Empty Field is not allowed" << std::endl;
		return ;
	}
	current_contact.setFirstName(input);

	std::cout << "Last Name : ";
	std::getline(std::cin, input);
	if (std::cin.eof())
		std::exit(EXIT_FAILURE);
	if (input.size() == 0) {
		std::cout << "(system) Empty Field is not allowed" << std::endl;
		return ;
	}
	current_contact.setLastName(input);

	std::cout << "Nickname : ";
	std::getline(std::cin, input);
	if (std::cin.eof())
		std::exit(EXIT_FAILURE);
	if (input.size() == 0) {
		std::cout << "(system) Empty Field is not allowed" << std::endl;
		return ;
	}
	current_contact.setNickname(input);

	std::cout << "Phone Number : ";
	std::getline(std::cin, input);
	if (std::cin.eof())
		std::exit(EXIT_FAILURE);
	if (input.size() == 0) {
		std::cout << "(system) Empty Field is not allowed" << std::endl;
		return ;
	}
	for (int i = 0; i < static_cast<int>(input.size()); i++) {
		if (std::isdigit(input[i]) == 0) {
			std::cout << "(system) Phone number must be consisted digit" << std::endl;
			return ;
		}
	}
	current_contact.setPhoneNumber(input);

	std::cout << "Darkest Secret : ";
	std::getline(std::cin, input);
	if (std::cin.eof())
		std::exit(EXIT_FAILURE);
	if (input.size() == 0) {
		std::cout << "(system) Empty Field is not allowed" << std::endl;
		return ;
	}
	current_contact.setDarkestSecret(input);

	std::cout << std::endl;
	std::cout << "(system) Save New Contact!" << std::endl;

	this->contact_index = ++this->contact_index % BOOK_SIZE;
	if (this->filled_contacts < BOOK_SIZE)
		this->filled_contacts++;
}

void	PhoneBook::searchContact(void) {

	if (filled_contacts == 0) {
		std::cout << "(system) Your PhoneBook is Empty" << std::endl;
		return ;
	}
	else {
		displayContactList();
		std::cout << "(system) Enter index for search : ";
		std::string	input;
		std::getline(std::cin, input);
		if (std::cin.eof())
			std::exit(EXIT_FAILURE);
		if (input.size() == 0) {
			std::cout << "(system) Index for searching not entered" << std::endl;
			return ;
		}
		if (input.length() != 1 || (input[0] < '0' || input[0] > '9')) {
			std::cout << "(system) Invalid index is entered" << std::endl;
			return ;
		}
		int	index = std::atoi(input.c_str());
		if (0 <= index && index < filled_contacts)
			this->contacts[index].printContactDetails();
		else
			std::cout << "(system) Wrong index entered" << std::endl;
	}
}

void	PhoneBook::displayContactList(void) {
	std::cout << "     Index" << "|" \
			<< "First name" << "|" \
			<< " Last name" << "|" \
			<< "  Nickname" << "|" << std::endl;
	for (int i = 0; i < this->filled_contacts; i++) {
		std::cout << "         " << i;
		this->contacts[i].printShortContact();
	}
}
