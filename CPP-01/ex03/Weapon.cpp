/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:40:45 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/30 13:26:40 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( void ) : type("bare feet"){}

Weapon::Weapon( std::string type ) : type(type) {}

Weapon::~Weapon( void ){}

std::string const Weapon::getType( void ) const { return this->type; }

void Weapon::setType( std::string newtype) { this->type = newtype; }