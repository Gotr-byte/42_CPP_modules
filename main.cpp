/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:16:07 by pbiederm          #+#    #+#             */
/*   Updated: 2023/03/04 12:17:12 by pbiederm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// c++ main.cpp Contact.cpp PhoneBook.cpp
// use getline, change the way the programme get input TODO
// error messages
// search
// ADD, SEARCH should 
#include "./PhoneBook.hpp"
#include "./Contact.hpp"


#define TRUE 1
#define SAME 0

// int add(PhoneBook &company, int index)
// {
// 	Contact inputContact;
// 	std::string inputFirstName;
// 	std::string inputLastName;
// 	std::string inputNickname;
// 	std::string inputPhoneNumber;
// 	std::string inputDarkestSecret;

// 	if (index > 7)
// 	{
// 		index = 0;
// 	}
// 	std::cout << "Please enter first name: ";
// 	std::getline(std::cin,  inputFirstName);
// 	if (!inputFirstName[0])
// 		return(index);
// 	inputContact.SetName(inputFirstName);
// 	std::cout << "Please enter last name: ";
// 	std::getline(std::cin,  inputLastName);
// 	if (!inputLastName[0])
// 		return(index);
// 	inputContact.SetLastName(inputLastName);
// 	std::cout << "Please enter nickname: ";
// 	std::getline(std::cin,  inputNickname);
// 	if(!inputNickname[0])
// 		return(index);
// 	inputContact.SetNickname(inputNickname);
// 	std::cout << "Please enter phone number: ";
// 	std::getline(std::cin,  inputPhoneNumber);
// 	if (!inputPhoneNumber[0])
// 		return(index);
// 	inputContact.SetPhoneNumber(inputPhoneNumber);
// 	std::cout << "Please enter darkest secret: ";
// 	std::getline(std::cin,  inputDarkestSecret);
// 	if (!inputPhoneNumber[0])
// 		return(index);
// 	inputContact.SetDarkestSecret(inputDarkestSecret);
// 	company.SetContact(inputContact, index);
// 	index++;
// 	return (index);
// }

// void search(PhoneBook &company, int index)
// {
// 	int localIndex = 0;
// 	while (localIndex < index)
// 	{
// 		std::string firstNameToPrint;
// 		std::string lastNameToPrint;
// 		std::string nicknameToPrint;
// 		std::string phoneNumberToPrint;
// 		if (company.GetContact(localIndex).GetName().length() > 10)
// 			firstNameToPrint = company.GetContact(localIndex).GetName().substr(0, 9).append(".");
// 		else
// 			firstNameToPrint = company.GetContact(localIndex).GetName().substr(0, 10);
// 		if (company.GetContact(localIndex).GetLastName().length() > 10)
// 			lastNameToPrint = company.GetContact(localIndex).GetLastName().substr(0, 9).append(".");
// 		else
// 			lastNameToPrint = company.GetContact(localIndex).GetLastName().substr(0, 10);
// 		if (company.GetContact(localIndex).GetNickname().length() > 10)
// 			nicknameToPrint = company.GetContact(localIndex).GetNickname().substr(0, 9).append(".");
// 		else
// 			nicknameToPrint = company.GetContact(localIndex).GetLastName().substr(0, 10);
// 		if (company.GetContact(localIndex).GetPhoneNumber().length() > 10)
// 			phoneNumberToPrint = company.GetContact(localIndex).GetPhoneNumber().substr(0, 9).append(".");
// 		else
// 			phoneNumberToPrint = company.GetContact(localIndex).GetPhoneNumber().substr(0, 10);
// 		std::cout << std::setw(10) << localIndex << " | ";
// 		std::cout << std::setw(10) << firstNameToPrint << " | ";
// 		std::cout << std::setw(10) << lastNameToPrint << " | ";
// 		std::cout << std::setw(10) << nicknameToPrint.substr(0, 10) << " | ";
// 		std::cout << std::setw(10) << phoneNumberToPrint.substr(0, 10) << std::endl;
// 		localIndex++;
// 	}
// 	std::string searchPrompt = "Enter entry id nb: ";
// 	std::cout << searchPrompt;
// 	std::string inputQuerryIndex;
// 	std::getline(std::cin,  inputQuerryIndex);
// 	int querryIndex = (inputQuerryIndex[0] - 48);
// 	if (inputQuerryIndex[1])
// 		querryIndex = -1;
// 	if (querryIndex > 7 || querryIndex  < 0 || !inputQuerryIndex[0])
// 	{
// 		std::cout << "Invalid entry" << std::endl;
// 		return ;
// 	}
// 	std::string fullFistName = company.GetContact(querryIndex).GetName();
// 	std::string fullLastName = company.GetContact(querryIndex).GetLastName();
// 	std::string fullNickname = company.GetContact(querryIndex).GetNickname();
// 	std::string fullPhoneNumber = company.GetContact(querryIndex).GetPhoneNumber();
// 	std::string fullDarkSecret = company.GetContact(querryIndex).GetDarkSecret();
// 	std::cout << "Recovering full data: " << std::endl;
// 	std::cout << "name: " << fullFistName << std::endl;
// 	std::cout << "last name: " << fullLastName << std::endl;
// 	std::cout << "nick: " << fullNickname << std::endl;
// 	std::cout << "phone number: " << fullPhoneNumber << std::endl;
// 	std::cout << "dark secret: " << fullDarkSecret << std::endl;
// }

int main()
{
	PhoneBook company;
	std::string prompt = "A wonderfull prompt> ";
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
			index = company.add(company, index);
			if (number < 8 && index != indexChanged)
				number++;
		}
		else if (readInput.compare(exitCmd) == SAME)
		{
			return 0;
		}
		else if (readInput.compare(searchCmd) == SAME)
		{
			company.search(company, number);
		}
		else
		{
			std::cout << "Invalid command" << std::endl;
		}
		std::cout << "enter ADD, SEARCH or EXIT" << std::endl;
		std::cout << prompt;
	}
	return 0;
}