/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:16:07 by pbiederm          #+#    #+#             */
/*   Updated: 2023/02/13 19:52:51 by pbiederm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//c++ main.cpp Contact.cpp PhoneBook.cpp
#include "./PhoneBook.hpp"
#include "./Contact.hpp"
#include <iostream>

#define TRUE 1
#define SAME 0

int add(Contact &inputContact, PhoneBook &company, int oldest)
{
	std::string inputFirstName;
	std::string inputLastName;

	if (oldest > 7)
		oldest = 0;
	int index = oldest;
	if (index < 8)
	{
		std::cout << "Please enter first name: ";
		std::cin >> inputFirstName;	
		inputContact.SetName(inputFirstName);
		std::cout << "Please enter last name: ";
		std::cin >> inputLastName;	
		inputContact.SetLastName(inputLastName);
		company.SetContact(inputContact, index);
		index++;
	}
	oldest++;
	return(oldest);
}

void search (PhoneBook &company){
	int index;
	index = 0;
	while (index < 8)
	{
		std::cout << "First name: "<< company.GetContact(index).GetName() << std::endl;
		std::cout << "Last name: " << company.GetContact(index).GetLastName() << std::endl;
		index++;
	}
	index = 0;
}

int main(){

	Contact 	inputContact;
	PhoneBook 	company;
	std::string prompt = "A wonderfull prompt> ";
	std::string addCmd = "ADD";
	std::string exitCmd = "EXIT";
	std::string searchCmd = "SEARCH";
	std::string	readInput;
	int			index;
	int			oldest;

	index = oldest = 0;
	while (TRUE)
	{
		std::cout << prompt;
		std::cin >> readInput;
		if (readInput.compare(addCmd) == SAME){
			oldest = add(inputContact, company, oldest);
		}
		else if (readInput.compare(exitCmd) == SAME){
			return 0;
		}
		else if (readInput.compare(searchCmd) == SAME){
			// while (index < 8)
			// {
			search (company);
				// std::cout << company.GetContact(index).GetName() << std::endl;
			// 	index++;
			// }
			// index = 0;
		}
		else{
			std::cout << "Invalid command" << std::endl;
		}
	}
	return 0;
}