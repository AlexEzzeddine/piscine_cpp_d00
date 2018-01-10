/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezzeddi <aezzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 15:59:46 by aezzeddi          #+#    #+#             */
/*   Updated: 2018/01/09 21:09:04 by aezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>
#include <limits>

const int MAX_CONTACTS = 8;
const int FIELD_WIDTH = 10;

class Phonebook
{	
	private:
		int			current_size;
		Contact		contacts[MAX_CONTACTS];

	public:
		Phonebook();
		~Phonebook();

		void		displayContacts();
		void		addContact();
};

#endif