/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:12:04 by pbiederm          #+#    #+#             */
/*   Updated: 2023/03/04 17:54:57 by pbiederm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>

class PhoneBook {
public:
    PhoneBook();
    ~PhoneBook();

    // void    SetContact(Contact &contactData, int index);
    Contact &GetContact(int index);
    int     add(int index);
    void    search(int index);
private:
    Contact contact[8];
};

