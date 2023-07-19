#include "Contact.hpp"
#include <iomanip>
#include <iostream>

std::string	Contact::getFirstName(void) const {
	return first_name;
}

std::string	Contact::getLastName(void) const {
	return last_name;
}

std::string	Contact::getNickname(void) const {
	return nickname;
}

std::string	Contact::getPhoneNumber(void) const {
	return phone_number;
}

std::string	Contact::getDarkestSecret(void) const {
	return darkest_secret;
}


void	Contact::setFirstName(std::string str) {
	first_name = str;
}

void	Contact::setLastName(std::string str) {
	last_name = str;
}

void	Contact::setNickname(std::string str) {
	nickname = str;
}

void	Contact::setPhoneNumber(std::string str) {
	phone_number = str;
}

void	Contact::setDarkestSecret(std::string str) {
	darkest_secret = str;
}

std::string Contact::getShortStr(std::string str) {
	std::string short_str = str;

	std::cout << std::setw(FIELD_WIDTH);
	if (FIELD_WIDTH < short_str.length())
	{
		short_str.resize(10);
		short_str.replace(9, 1, ".");
	}
	return short_str;
}

void	Contact::printShortContact(void) {
	std::cout << "|" << getShortStr(this->first_name) \
			<< "|" << getShortStr(this->last_name) \
			<< "|" << getShortStr(this->nickname) \
			<< "|" << std::endl;
}

void	Contact::printContactDetails(void) {
	std::cout << "first name : " << this->first_name << std::endl;
	std::cout << "last name : " << this->last_name << std::endl;
	std::cout << "nickname : " << this->nickname << std::endl;
	std::cout << "phone number : " << this->phone_number << std::endl;
	std::cout << "darkest secret : " << this->darkest_secret<< std::endl;
}
