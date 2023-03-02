/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:12:04 by pbiederm          #+#    #+#             */
/*   Updated: 2023/03/02 15:01:41 by pbiederm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP "./PhoneBook.hpp"

#include "./Contact.hpp"

class PhoneBook {
	private:
		Contact contact[8];
		int		oldest;
	public:
		PhoneBook( void );
		~PhoneBook( void );
		void SetContact( Contact &contactData, int index );
		Contact &GetContact( int index );
		void SetOldest( int inputOldest );
		int GetOldest (void);
};
#endif
