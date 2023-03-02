/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:16:07 by pbiederm          #+#    #+#             */
/*   Updated: 2023/03/02 15:12:14 by pbiederm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// c++ main.cpp Contact.cpp PhoneBook.cpp
#include "./PhoneBook.hpp"
#include "./Contact.hpp"
#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>

#define TRUE 1
#define SAME 0

int add(Contact &inputContact, PhoneBook &company, int index)
{
	std::string inputFirstName;
	std::string inputLastName;
	std::string inputNickname;
	std::string inputPhoneNumber;
	std::string inputDarkestSecret;

	if (index > 7)
	{
		index = 0;
		// index = company.GetOldest();
		// if (index == 7)
		// 	company.SetOldest(0);
		// else
		// 	company.SetOldest(index + 1);
	}
	std::cout << "Please enter first name: ";
	std::cin >> inputFirstName;
	inputContact.SetName(inputFirstName);
	// std::cout << "Please enter last name: ";
	// std::cin >> inputLastName;
	// inputContact.SetLastName(inputLastName);
	// std::cout << "Please enter nickname: ";
	// std::cin >> inputNickname;
	// inputContact.SetNickname(inputNickname);
	// std::cout << "Please enter phone number: ";
	// std::cin >> inputPhoneNumber;
	// inputContact.SetPhoneNumber(inputPhoneNumber);
	// std::cout << "Please enter darkest secret: ";
	// std::cin >> inputDarkestSecret;
	// inputContact.SetDarkestSecret(inputDarkestSecret);
	company.SetContact(inputContact, index);
	index++;
	return (index);
}

void search(PhoneBook &company, int index)
{
	int localIndex = 0;
	while (localIndex < index)
	{
		std::string firstNameToPrint;
		std::string lastNameToPrint;
		std::string nicknameToPrint;
		std::string phoneNumberToPrint;
		if (company.GetContact(localIndex).GetName().length() > 10)
			firstNameToPrint = company.GetContact(localIndex).GetName().substr(0, 9).append(".");
		else
			firstNameToPrint = company.GetContact(localIndex).GetName().substr(0, 10);
		// if (company.GetContact(localIndex).GetLastName().length() > 10)
		// 	lastNameToPrint = company.GetContact(localIndex).GetLastName().substr(0, 9).append(".");
		// else
		// 	lastNameToPrint = company.GetContact(localIndex).GetLastName().substr(0, 10);
		// if (company.GetContact(localIndex).GetNickname().length() > 10)
		// 	nicknameToPrint = company.GetContact(localIndex).GetNickname().substr(0, 9).append(".");
		// else
		// 	nicknameToPrint = company.GetContact(localIndex).GetLastName().substr(0, 10);
		// if (company.GetContact(localIndex).GetPhoneNumber().length() > 10)
		// 	phoneNumberToPrint = company.GetContact(localIndex).GetPhoneNumber().substr(0, 9).append(".");
		// else
		// 	phoneNumberToPrint = company.GetContact(localIndex).GetPhoneNumber().substr(0, 10);
		std::cout << std::setw(10) << localIndex << " | ";
		std::cout << std::setw(10) << firstNameToPrint << " | ";
		std::cout << std::endl;
		// std::cout << std::setw(10) << lastNameToPrint << " | ";
		// std::cout << std::setw(10) << nicknameToPrint.substr(0, 10) << " | ";
		// std::cout << std::setw(10) << phoneNumberToPrint.substr(0, 10) << std::endl;
		localIndex++;
	}
	std::string searchPrompt = "Enter entry id nb: ";
	std::cout << searchPrompt;
	int querryIndex;
	std::cin >> querryIndex;
	std::string fullFistName = company.GetContact(querryIndex).GetName();
	// std::string fullLastName = company.GetContact(querryIndex).GetLastName();
	// std::string fullNickname = company.GetContact(querryIndex).GetNickname();
	// std::string fullPhoneNumber = company.GetContact(querryIndex).GetPhoneNumber();
	// std::string fullDarkSecret = company.GetContact(querryIndex).GetDarkSecret();
	std::cout << "Recovering full data: " << std::endl;
	std::cout << "name: " << fullFistName << std::endl;
	// std::cout << "last name: " << fullLastName << std::endl;
	// std::cout << "nick: " << fullNickname << std::endl;
	// std::cout << "phone number: " << fullPhoneNumber << std::endl;
	// std::cout << "dark secret: " << fullDarkSecret << std::endl;
}

int main()
{

	Contact inputContact;
	PhoneBook company;
	std::string prompt = "A wonderfull prompt> ";
	std::string addCmd = "ADD";
	std::string exitCmd = "EXIT";
	std::string searchCmd = "SEARCH";
	std::string readInput;
	int index;
	int oldest;

	company.SetOldest(0);
	index = 0;
	std::cout << prompt;
	while (std::cin >> readInput)
	{

		if (readInput.compare(addCmd) == SAME)
		{
			index = add(inputContact, company, index);
		}
		else if (readInput.compare(exitCmd) == SAME)
		{
			exit(0);
		}
		else if (readInput.compare(searchCmd) == SAME)
		{
			search(company, index);
		}
		else
		{
			std::cout << "Invalid command" << std::endl;
		}
		// if(readInput.eof() == 1)
		// {
		// 	std::cout << "ctrl - D has been pressed, the phonebook will now exit" << std::endl;
		// 	exit(0);
		// }
		std::cout << "enter ADD, SEARCH or EXIT" << std::endl;
		std::cout << prompt;
	}
	return 0;
}