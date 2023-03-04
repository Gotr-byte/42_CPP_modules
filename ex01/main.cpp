/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:16:07 by pbiederm          #+#    #+#             */
/*   Updated: 2023/03/04 18:59:31 by pbiederm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PhoneBook.hpp"
#include "./Contact.hpp"

#define SAME 0

int main()
{
	PhoneBook company;
	std::string prompt = "$$$> ";
	std::string addCmd = "ADD";
	std::string exitCmd = "EXIT";
	std::string searchCmd = "SEARCH";
	std::string readInput;
	int index;
	int number;

	index = 0;
	number = 0;
	std::cout << prompt;
	while (std::getline(std::cin, readInput))
	{

		if (readInput.compare(addCmd) == SAME)
		{
			int indexChanged = 0;
			indexChanged = index;
			index = company.add(index);
			if (number < 8 && index != indexChanged)
				number++;
		}
		else if (readInput.compare(exitCmd) == SAME)
			return 0;
		else if (readInput.compare(searchCmd) == SAME)
			company.search(number);
		else
			std::cout << "Invalid command" << std::endl;
		std::cout << "enter ADD, SEARCH or EXIT" << std::endl;
		std::cout << prompt;
	}
	return 0;
}