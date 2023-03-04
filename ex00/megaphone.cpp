/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:29:53 by pbiederm          #+#    #+#             */
/*   Updated: 2023/03/04 12:40:33 by pbiederm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//c++ magaphone.cpp -o megaphone
//c++ -std=c++98 -Wall -Wextra -Werror magaphone.cpp -o megaphone

#include <iostream>

int main(int argc, char **argv)
{
	char	buff;
	int		i;
	int		j;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else if (argc > 1)
	{
		j = 1;
		while(argv[j])
		{
			i = 0;
			while(argv[j][i])
			{
				if (argv[j][i] >= 'a' && argv[j][i] <= 'z')
					buff = argv[j][i] + 'Z' - 'z';
				else
					buff = argv[j][i];
				std::cout << buff;
				i++;
			}
			j++;
		}
		std::cout << std::endl;
	}
	else if (argc > 2)
	{
		std::cout << "Error: invalid input" << std::endl;
	}
  return 0;	
}