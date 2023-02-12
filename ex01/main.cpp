/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:16:07 by pbiederm          #+#    #+#             */
/*   Updated: 2023/02/12 14:31:36 by pbiederm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//c++ main.cpp Contact.cpp PhoneBook.cpp
#include "./PhoneBook.hpp"
#include "./Contact.hpp"
#include <iostream>

#define TRUE 1

int main(){

	Contact instance[8];
	PhoneBook Company;
	std::string name;
	std::string yourName;
	std::string chooseFunction;
	std::string promptInput;
	std::string prompt = "phoneBook>";
	std::string instructions = "enter 1 for ADD";
	int			index;
	int			oldest;

	oldest = 0;
	while (TRUE)
	{
		std::cout << prompt;
		if (oldest > 8)
			oldest = 0;
		index = oldest;
		
		while (index < 8)
		{
			std::cout << "Please enter name: ";
			std::cin >> name;	
			instance[index].SetName(name);
			yourName = instance[index].GetName();
			std::cout << "Hello " << yourName << std::endl;
			std::cout << "Index: " << index << std::endl;
			Company.SetContact(instance[index], index);
			std::cout << Company.GetContact(index).GetName() << " hired" << std::endl;
			index++;
		}
		oldest++;
	}


	// std::cout << "Please enter name: ";
	// std::cin >> name;	
	// instance2.SetName(name);
	// yourName = instance2.GetName();
	// std::cout << "Hello " << yourName << std::endl;
	// Company.SetContact(instance2, 1);
	// std::cout << Company.GetContact(1).GetName() << " hired" << std::endl;
	// while (TRUE)
	// {
	// 	cin <<

	// }
	// instance.setFoo( 42 );
	// std::cout << "instance.getFoo(): " << instance.getFoo() << std::endl;
	// instance.setFoo(-42);
	// std::cout << "instance.getFoo(): " << instance.getFoo() << std::endl;

	return 0;
}