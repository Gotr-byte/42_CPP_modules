/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:13:03 by pbiederm          #+#    #+#             */
/*   Updated: 2023/03/02 15:21:17 by pbiederm         ###   ########.fr       */
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

void PhoneBook::SetContact( Contact &contactData, int index ){
	PhoneBook::contact[index] = contactData;
}

// void PhoneBook::SetOldest( int inputOldest ){
// 	PhoneBook::oldest = inputOldest;
// }

Contact &PhoneBook::GetContact( int index ){
	return(PhoneBook::contact[index]);
}

// int PhoneBook::GetOldest(void){
// 	return(PhoneBook::oldest);
// }
