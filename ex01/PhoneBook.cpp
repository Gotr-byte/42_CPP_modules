/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:13:03 by pbiederm          #+#    #+#             */
/*   Updated: 2023/02/11 20:43:19 by pbiederm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PhoneBook.hpp"
#include "./Contact.hpp"
#include <iostream>

PhoneBook::PhoneBook( void ){
	std::cout << "PhoneBook Constructor called" << std::endl;
	return;
}

PhoneBook::~PhoneBook( void ){
	std::cout << "PhoneBook Destructor called" << std::endl;
	return;
}

void PhoneBook::SetContact( Contact contactData, int index )
{
	PhoneBook::contact[index] = contactData;
}

Contact PhoneBook::GetContact( int index )
{
	return(PhoneBook::contact[index]);
}

// void PhoneBook::Add( Contact contactData, int index, int oldest)
// {
// 	std::string name;
// 	std::string yourName;
	
// 	if (oldest > 8)
// 		oldest = 0;
// 	index = oldest;
	
// 	while (index < 8)
// 	{
// 		std::cout << "Please enter name: ";
// 		std::cin >> name;	
// 		contactData.SetName(name);
// 		yourName = contactData.GetName();
// 		std::cout << "Hello " << yourName << std::endl;
// 		Company.SetContact(contactData[index], index);
// 		std::cout << Company.GetContact(index).GetName() << " hired" << std::endl;
// 		index++;
// 	}
// 	oldest++;
// }


