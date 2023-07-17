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
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	for (int i = 1; argv[i] != NULL; i++) {
		for (int j = 0; argv[i][j] != '\0'; j++)
			std::cout << static_cast<char>(std::toupper(argv[i][j]));
	}
	std::cout << std::endl;
	return (0);
}
