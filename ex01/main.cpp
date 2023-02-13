/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:16:07 by pbiederm          #+#    #+#             */
/*   Updated: 2023/02/13 20:45:39 by pbiederm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//c++ main.cpp Contact.cpp PhoneBook.cpp
#include "./PhoneBook.hpp"
#include "./Contact.hpp"
#include <iostream>

#define TRUE 1
#define SAME 0

int add(Contact &inputContact, PhoneBook &company, int index)
{
	std::string inputFirstName;
	std::string inputLastName;

	if (index > 7)
	{
		index = 0;
	}
	std::cout << "Please enter first name: ";
	std::cin >> inputFirstName;	
	inputContact.SetName(inputFirstName);
	std::cout << "Please enter last name: ";
	std::cin >> inputLastName;	
	inputContact.SetLastName(inputLastName);
	company.SetContact(inputContact, index);
	index++;
	return(index);
}

void search (PhoneBook &company, int index){
	int localIndex = 0;
	while (localIndex < index)
	{
		std::string firstNameToPrint;
		if (company.GetContact(localIndex).GetName().length() > 10)
			firstNameToPrint = company.GetContact(localIndex).GetName().substr(0, 9).append(".");
		else
			firstNameToPrint = company.GetContact(localIndex).GetName().substr(0, 10);
		std::string lastNameToPrint = company.GetContact(localIndex).GetLastName();

		std::cout << firstNameToPrint << " | " << lastNameToPrint.substr(0,10) << std::endl;
		localIndex++;
	}
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
			index = add(inputContact, company, index);
		}
		else if (readInput.compare(exitCmd) == SAME){
			return 0;
		}
		else if (readInput.compare(searchCmd) == SAME){
			search (company, index);
		}
		else{
			std::cout << "Invalid command" << std::endl;
		}
	}
	return 0;
}