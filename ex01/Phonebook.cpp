/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezzeddi <aezzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 15:46:37 by aezzeddi          #+#    #+#             */
/*   Updated: 2018/01/09 21:51:20 by aezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

Phonebook::Phonebook()
{
	current_size = 0;
}

Phonebook::~Phonebook(){}

void Phonebook::addContact()
{
	Contact* contact;

	if(this->current_size >= MAX_CONTACTS)
		std::cout << "Sorry, maximum number of contacts reached: " << MAX_CONTACTS << std::endl;
	else
	{
		contact = &this->contacts[this->current_size];
		contact->setFirstName();
		contact->setLastName();
		contact->setNickname();
		contact->setLogin();
		contact->setAddress();
		contact->setEmail();
		contact->setPhoneNumber();
		contact->setBirthday();
		contact->setFavoriteMeal();
		contact->setUnderwearColor();
		contact->setDarkestSecret();
		this->current_size++;
	}
}

static std::string truncate_str(std::string str)
{
	str = str.erase((FIELD_WIDTH - 1), str.length() - (FIELD_WIDTH - 1));
	str.append(".");
	return (str);
}

void Phonebook::displayContacts()
{
	Contact *contact;
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string indexBuf;
	int index = -1;
	if (!this->current_size)
	{
		std::cout << "Your phonebook is empty, use ADD to add new contacts" << std::endl;
		return;
	}
	std::cout << std::setw(FIELD_WIDTH);
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	for (int i = 0; i < this->current_size; i++)
	{
		contact = &(this->contacts[i]);
		firstName = contact->getFirstName();
		lastName = contact->getLastName();
		nickname = contact->getNickname();

		std::cout << "|" << std::setw(FIELD_WIDTH) << i;

		firstName = (firstName.length() > FIELD_WIDTH) ? \
			truncate_str(firstName) : firstName;
		std::cout << "|" << std::setw(FIELD_WIDTH) << firstName;

		lastName = (lastName.length() > FIELD_WIDTH) ? \
			truncate_str(lastName) : lastName;
		std::cout << "|" << std::setw(FIELD_WIDTH) << lastName;

		nickname = (nickname.length() > FIELD_WIDTH) ? \
			truncate_str(nickname) : nickname;
		std::cout << "|" << std::setw(FIELD_WIDTH) << nickname;
		std::cout << "|" << std::endl;
	}
	while (!(index >= 0 && index < this->current_size))
	{
		std::cout << "Enter index [0-" << this->current_size - 1 << "]: ";
		getline(std::cin, indexBuf);
		if(!indexBuf.empty())
			index = stoi(indexBuf);
		if (index == 0 && indexBuf[0] != '0')
			index = -1;
	}
	this->contacts[index].display();
}