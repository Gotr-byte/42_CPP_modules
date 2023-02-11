/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:23:19 by pbiederm          #+#    #+#             */
/*   Updated: 2023/02/11 19:39:50 by pbiederm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#ifndef CONTACT_HPP
# define CONTACT_HPP "Contact.hpp"

class Contact {
	private:
		std::string firstName;
	public:
		Contact( void );
		~Contact( void );
		void SetName( std::string name );
		std::string GetName();
		void Search(std::string firstName);
};
#endif