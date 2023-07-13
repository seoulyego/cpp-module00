#include <cstdlib>
#include <iostream>

/*
*	void	i_wanna_go_home(void)
*	{
*		system("leaks megaphone");
*	}
*/

int	main(int argc, char *argv[])
{
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else {
		for (int i = 1; argv[i] != NULL; i++) {
			std::string str(argv[i]);
			for (int j = 0; str[j] != '\0'; j++)
				str[j] = toupper(str[j]);
			std::cout << str;
		}
		std::cout << std::endl;
	}
	return (0);
}
