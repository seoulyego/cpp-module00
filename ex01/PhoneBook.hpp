#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

#define BOOK_SIZE 8

class PhoneBook {
	private:
		Contact	contacts[BOOK_SIZE];
		int		contact_index;
		int		filled_contacts;

		void	displayContactList();

	public:
		void	addContact();
		void	searchContact();

	PhoneBook();
};

#endif  // PHONEBOOK_HPP
