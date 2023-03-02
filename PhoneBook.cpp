/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:13:03 by pbiederm          #+#    #+#             */
/*   Updated: 2023/03/02 16:39:51 by pbiederm         ###   ########.fr       */
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

Contact &PhoneBook::GetContact( int index ){
	return(PhoneBook::contact[index]);
}
