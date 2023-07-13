#include <string>
#include "Contact.hpp"

class PhoneBook {
	private:
		int		index;
		Contact	contacts[8];
	public:
		void	add_contact(void);
};
