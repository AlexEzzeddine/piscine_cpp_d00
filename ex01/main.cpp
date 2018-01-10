/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezzeddi <aezzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 16:00:23 by aezzeddi          #+#    #+#             */
/*   Updated: 2018/01/09 21:48:14 by aezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Phonebook.hpp"
#include "Contact.hpp"


void get_command(Phonebook &phonebook)
{
	std::string command;

	std::cout << "Enter command: ";
    getline(std::cin, command);
	if (command == "EXIT")
		exit(0);
	else if(command ==  "ADD")
		phonebook.addContact();
	else if(command ==  "SEARCH")
		phonebook.displayContacts();
}

int main()
{
	Phonebook phonebook;

	while(true)
		get_command(phonebook);
	return 0;
}