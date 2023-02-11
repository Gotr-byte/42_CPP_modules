/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:12:04 by pbiederm          #+#    #+#             */
/*   Updated: 2023/02/11 20:43:25 by pbiederm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP "./PhoneBook.hpp"

#include "./Contact.hpp"

class PhoneBook {
	private:
		Contact contact[8];
	public:
		PhoneBook( void );
		~PhoneBook( void );
		void SetContact( Contact contactData, int index );
		Contact GetContact( int index );
		// void Add( Contact contactData, int index);
};
#endif

// class classA
// {
// public:
// classA();

// int intArray[20];
// vector<classB> arrayOfClassB;
// };

// classA::classA() : arrayOfClassB(20, classB("")) { }