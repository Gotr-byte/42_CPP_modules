/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:13:03 by pbiederm          #+#    #+#             */
/*   Updated: 2023/03/04 11:11:09 by pbiederm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PhoneBook.hpp"
#include "./Contact.hpp"
#include <iostream>

PhoneBook::PhoneBook( void ){
	// std::cout << "PhoneBook Constructor called" << std::endl;
	// return;
}

PhoneBook::~PhoneBook( void ){
	// std::cout << "PhoneBook Destructor called" << std::endl;
	// return;
}

void PhoneBook::SetContact( Contact &contactData, int index ){
	PhoneBook::contact[index] = contactData;
}

Contact &PhoneBook::GetContact( int index ){
	return(PhoneBook::contact[index]);
}

int PhoneBook::add(PhoneBook &company, int index)
{
	Contact inputContact;
	std::string inputFirstName;
	std::string inputLastName;
	std::string inputNickname;
	std::string inputPhoneNumber;
	std::string inputDarkestSecret;

	if (index > 7)
	{
		index = 0;
	}
	std::cout << "Please enter first name: ";
	std::getline(std::cin,  inputFirstName);
	if (!inputFirstName[0])
		return(index);
	inputContact.SetName(inputFirstName);
	std::cout << "Please enter last name: ";
	std::getline(std::cin,  inputLastName);
	if (!inputLastName[0])
		return(index);
	inputContact.SetLastName(inputLastName);
	std::cout << "Please enter nickname: ";
	std::getline(std::cin,  inputNickname);
	if(!inputNickname[0])
		return(index);
	inputContact.SetNickname(inputNickname);
	std::cout << "Please enter phone number: ";
	std::getline(std::cin,  inputPhoneNumber);
	if (!inputPhoneNumber[0])
		return(index);
	inputContact.SetPhoneNumber(inputPhoneNumber);
	std::cout << "Please enter darkest secret: ";
	std::getline(std::cin,  inputDarkestSecret);
	if (!inputPhoneNumber[0])
		return(index);
	inputContact.SetDarkestSecret(inputDarkestSecret);
	company.SetContact(inputContact, index);
	index++;
	return (index);
}