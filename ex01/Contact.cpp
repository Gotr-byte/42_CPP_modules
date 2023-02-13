/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:21:51 by pbiederm          #+#    #+#             */
/*   Updated: 2023/02/13 19:41:33 by pbiederm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./Contact.hpp"

Contact::Contact( void ){
	std::cout << "Contact Constructor called" << std::endl;
	return;
}

Contact::~Contact( void ){
	std::cout << "Contact Destructor called" << std::endl;
	return;
}


// The contact fields are: first name, last name, nickname, phone number, and
// darkest secret. A saved contact can’t have empty fields.

void Contact::SetName( std::string name ){
			Contact::firstName = name;
}

void Contact::SetLastName ( std::string inputLastName){
			Contact::lastName = inputLastName;
}

std::string Contact::GetName(void)
{
	return(Contact::firstName);
}

std::string Contact::GetLastName(void)
{
	return(Contact::lastName);
}