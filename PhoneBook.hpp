/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:12:04 by pbiederm          #+#    #+#             */
/*   Updated: 2023/03/04 11:58:46 by pbiederm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP "./PhoneBook.hpp"

#include "./Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>

class PhoneBook {
	private:
		Contact contact[8];
	public:
		PhoneBook( void );
		~PhoneBook( void );
		void SetContact( Contact &contactData, int index );
		Contact &GetContact( int index );
		int add(PhoneBook &company, int index);
		void search(PhoneBook &company, int index);
};
#endif
