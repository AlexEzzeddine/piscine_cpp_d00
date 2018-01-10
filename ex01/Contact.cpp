/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezzeddi <aezzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 15:57:13 by aezzeddi          #+#    #+#             */
/*   Updated: 2018/01/09 21:32:32 by aezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){}
Contact::~Contact(){}

void Contact::display()
{
	std::cout << "First Name: " << this->getFirstName() << std::endl;
	std::cout << "Last Name: " << this->getLastName() << std::endl;
	std::cout << "Nickname: " << this->getNickname() << std::endl;
	std::cout << "Login: " << this->getLogin() << std::endl;
	std::cout << "Address: " << this->getAddress() << std::endl;
	std::cout << "Phone Number: " << this->getPhoneNumber() << std::endl;
	std::cout << "Birthday Date: " << this->getBirthday() << std::endl;
	std::cout << "Favorite Meal: " << this->getFavoriteMeal() << std::endl;
	std::cout << "Underwear Color: " << this->getUnderwearColor() << std::endl;
	std::cout << "Darkest Secret: " << this->getDarkestSecret() << std::endl;
}

void Contact::setFirstName()
{
	std::string firstName;

	std::cout << "Input First Name: ";
	getline(std::cin, firstName);
	this->firstName = firstName;
}

void Contact::setLastName()
{
	std::string lastName;

	std::cout << "Input Last Name: ";
	getline(std::cin, lastName);
	this->lastName = lastName;
}

void Contact::setNickname()
{
	std::string nickname;

	std::cout << "Input Nickname: ";
	getline(std::cin, nickname);
	this->nickname = nickname;
}

void Contact::setLogin()
{
	std::string login;

	std::cout << "Input Login: ";
	getline(std::cin, login);
	this->login = login;
}

void Contact::setAddress()
{
	std::string address;

	std::cout << "Input Address: ";
	getline(std::cin, address);
	this->address = address;
}

void Contact::setEmail()
{
	std::string email;

	std::cout << "Input E-mail: ";
	getline(std::cin, email);
	this->email = email;
}

void Contact::setPhoneNumber()
{
	std::string phoneNumber;

	std::cout << "Input Phone Number: ";
	getline(std::cin, phoneNumber);
	this->phoneNumber = phoneNumber;
}

void Contact::setBirthday()
{
	std::string birthday;

	std::cout << "Input Birthday Date: ";
	getline(std::cin, birthday);
	this->birthday = birthday;
}

void Contact::setFavoriteMeal()
{
	std::string favoriteMeal;

	std::cout << "Input Favorite Meal: ";
	getline(std::cin, favoriteMeal);
	this->favoriteMeal = favoriteMeal;
}

void Contact::setUnderwearColor()
{
	std::string underwearColor;

	std::cout << "Input Underwear Color: ";
	getline(std::cin, underwearColor);
	this->underwearColor = underwearColor;
}

void Contact::setDarkestSecret()
{
	std::string darkestSecret;

	std::cout << "Input Darkest Secret: ";
	getline(std::cin, darkestSecret);
	this->darkestSecret = darkestSecret;
}

std::string Contact::getFirstName(void)
{
	return this->firstName;
}

std::string Contact::getLastName(void)
{
	return this->lastName;
}

std::string Contact::getNickname(void)
{
	return this->nickname;
}

std::string Contact::getLogin(void)
{
	return this->login;
}

std::string Contact::getAddress(void)
{
	return this->address;
}

std::string Contact::getEmail(void)
{
	return this->email;
}

std::string Contact::getPhoneNumber(void)
{
	return this->phoneNumber;
}

std::string Contact::getBirthday(void)
{
	return this->birthday;
}

std::string Contact::getFavoriteMeal(void)
{
	return this->favoriteMeal;
}

std::string Contact::getUnderwearColor(void)
{
	return this->underwearColor;
}

std::string Contact::getDarkestSecret(void)
{
	return this->darkestSecret;
}