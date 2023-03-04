/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:13:03 by pbiederm          #+#    #+#             */
/*   Updated: 2023/03/04 19:02:59 by pbiederm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PhoneBook.hpp"
#include "./Contact.hpp"
#include <iostream>

PhoneBook::PhoneBook( void ){}
PhoneBook::~PhoneBook( void ){}

Contact &PhoneBook::GetContact( int index ){
	return(PhoneBook::contact[index]);
}

int PhoneBook::add(int index)
{
	std::string inputFirstName;
	std::string inputLastName;
	std::string inputNickname;
	std::string inputPhoneNumber;
	std::string inputDarkestSecret;

	if (index > 7)
	{
		index = 0;
	}
	ASK_FOR_PARAM(inputFirstName, "first name", index);
	// this->contact[index].SetName(inputFirstName);
	ASK_FOR_PARAM(inputLastName, "last name", index)
	// std::cout << "Please enter last name: ";
	// std::getline(std::cin,  inputLastName);
	// if (!inputLastName[0])
	// 	return(index);
	// this->contact[index].SetLastName(inputLastName);
	std::cout << "Please enter nickname: ";
	std::getline(std::cin,  inputNickname);
	if(!inputNickname[0])
		return(index);
	this->contact[index].SetNickname(inputNickname);
	std::cout << "Please enter phone number: ";
	std::getline(std::cin,  inputPhoneNumber);
	if (!inputPhoneNumber[0])
		return(index);
	this->contact[index].SetPhoneNumber(inputPhoneNumber);
	std::cout << "Please enter darkest secret: ";
	std::getline(std::cin,  inputDarkestSecret);
	if (!inputDarkestSecret[0])
		return(index);
	this->contact[index].SetDarkestSecret(inputDarkestSecret);
	index++;
	return (index);
}

void PhoneBook::search(int index)
{
	int localIndex = 0;
	if (!this->GetContact(0).GetName()[0])
	{
		std::cout << "No contacts in database" << std::endl;
		return ;
	}
	while (localIndex < index)
	{
		std::string firstNameToPrint;
		std::string lastNameToPrint;
		std::string nicknameToPrint;
		std::string phoneNumberToPrint;
		if (this->GetContact(localIndex).GetName().length() > 10)
			firstNameToPrint = this->GetContact(localIndex).GetName().substr(0, 9).append(".");
		else
			firstNameToPrint = this->GetContact(localIndex).GetName().substr(0, 10);
		if (this->GetContact(localIndex).GetLastName().length() > 10)
			lastNameToPrint = this->GetContact(localIndex).GetLastName().substr(0, 9).append(".");
		else
			lastNameToPrint = this->GetContact(localIndex).GetLastName().substr(0, 10);
		if (this->GetContact(localIndex).GetNickname().length() > 10)
			nicknameToPrint = this->GetContact(localIndex).GetNickname().substr(0, 9).append(".");
		else
			nicknameToPrint = this->GetContact(localIndex).GetLastName().substr(0, 10);
		if (this->GetContact(localIndex).GetPhoneNumber().length() > 10)
			phoneNumberToPrint = this->GetContact(localIndex).GetPhoneNumber().substr(0, 9).append(".");
		else
			phoneNumberToPrint = this->GetContact(localIndex).GetPhoneNumber().substr(0, 10);
		std::cout << std::setw(10) << localIndex << " | ";
		std::cout << std::setw(10) << firstNameToPrint << " | ";
		std::cout << std::setw(10) << lastNameToPrint << " | ";
		std::cout << std::setw(10) << nicknameToPrint.substr(0, 10) << " | ";
		std::cout << std::setw(10) << phoneNumberToPrint.substr(0, 10) << std::endl;
		localIndex++;
	}
	std::string searchPrompt = "Enter entry id nb: ";
	std::cout << searchPrompt;
	std::string inputQuerryIndex;
	std::getline(std::cin,  inputQuerryIndex);
	int querryIndex = (inputQuerryIndex[0] - 48);
	if (inputQuerryIndex[1])
		querryIndex = -1;
	if (querryIndex > 7 || querryIndex  < 0 || !inputQuerryIndex[0])
	{
		std::cout << "Invalid entry" << std::endl;
		return ;
	}
	std::string fullFistName = this->GetContact(querryIndex).GetName();
	std::string fullLastName = this->GetContact(querryIndex).GetLastName();
	std::string fullNickname = this->GetContact(querryIndex).GetNickname();
	std::string fullPhoneNumber = this->GetContact(querryIndex).GetPhoneNumber();
	std::string fullDarkSecret = this->GetContact(querryIndex).GetDarkSecret();
	std::cout << "Recovering full data: " << std::endl;
	std::cout << "name: " << fullFistName << std::endl;
	std::cout << "la$t name: " << fullLastName << std::endl;
	std::cout << "nick: " << fullNickname << std::endl;
	std::cout << "phone number: " << fullPhoneNumber << std::endl;
	std::cout << "dark secret: " << fullDarkSecret << std::endl;
}