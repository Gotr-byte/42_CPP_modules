/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:23:19 by pbiederm          #+#    #+#             */
/*   Updated: 2023/02/13 19:43:05 by pbiederm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#ifndef CONTACT_HPP
# define CONTACT_HPP "Contact.hpp"
// The contact fields are: first name, last name, nickname, phone number, and
// darkest secret. A saved contact can’t have empty fields.

class Contact {
	private:
		std::string firstName;
		std::string lastName;
		// std::string nickname;
		// std::string phoneNumber;
		// std::string darkestSecret;
	public:
		Contact( void );
		~Contact( void );
		void SetName( std::string name );
		void SetLastName ( std::string inputLastName);
		std::string GetName();
		std::string GetLastName(void);
		void Search(std::string firstName);
};
#endif