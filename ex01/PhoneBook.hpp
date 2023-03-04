/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:12:04 by pbiederm          #+#    #+#             */
/*   Updated: 2023/03/04 19:01:06 by pbiederm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>

#define ASK_FOR_PARAM(param, name, index) \
std::cout << "Please enter " << name << ": ";\
std::getline(std::cin,  param); \
if (!param[0]) \
    return(index); \
this->contact[index].SetName(param);


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

