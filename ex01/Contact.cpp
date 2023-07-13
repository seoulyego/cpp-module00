#include "Contact.hpp"
#include <iostream>
#include <string>

void	Contact::add_contact(void)
{
	std::cout << "first name is " << std::endl;
	std::cin >> this->first_name;
	std::cout << "last name is " << std::endl;
	std::cin >> this->last_name;
	std::cout << "nickname is " << std::endl;
	std::cin >> this->nickname;
	std::cout << "phone number is " << std::endl;
	std::cin >> this->phone_number;
	std::cout << "secret is " << std::endl;
	std::cin >> this->darkest_secret;
	std::cout << "Save Contact" << std::endl;
}