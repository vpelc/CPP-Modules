/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 10:11:37 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/09 13:35:22 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	Harl::context = 0;

Harl::Harl( void ){}

Harl::~Harl( void ){}



void Harl::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love Ranked League of Legends," << std::endl
		<<  "I play lots of solo queues. I really enjoy them!" << std::endl;
	std::cout << std::endl;
}

void Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
		switch(context)
	{
		case BROKEN: 
			std::cout << "How do I die here? He litteraly two shot me level 3, WTF??" << std::endl
				<< "I played the trade perfectly and still lost." << std::endl;
			break;
		case TEAM:
			std::cout << "How do I die here? My jungler is inting. He litteraly has to gank now, WTF??" << std::endl
				<< "I played like I was supposed to. I always get the worst team mates." << std::endl;
			break;
		case LAG:
			std::cout << "How do I die here? I litteraly pressed the button" << std::endl
				<< "I must be f*cking lagging. I did nothing wrong here. " << std::endl;
			break;
	}
	std::cout << std::endl;
}

void Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
		switch(context)
	{
		case BROKEN: 
			std::cout << "WHAT IS THIS CHAMPION?! This is litteraly broken." << std::endl
				<< "If I played this dog sh*t champion I would master" << std::endl;
			break;
		case TEAM:
			std::cout << "WHAT IS THIS TEAM?! This is a f*cking joke. What are they doing??" << std::endl
				<< "I'm litteraly the best player here, why are they not following my calls?" << std::endl;
			break;
		case LAG:
			std::cout << "WHAT IS THIS CONNEXION?! This is unplayable." << std::endl
				<< "My internet is holding me back, I litteraly can destroy these guys" << std::endl;
			break;
	}
	std::cout << std::endl;
}

void Harl::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	switch(context)
	{
		case BROKEN: 
			std::cout << "WTF?!! This game is broken. This champion is unplayable." << std::endl
				<< "What a f*cking brainless shit! I hate this game" << std::endl;
			break;
		case TEAM:
			std::cout << "WTF?!! My whole team is trolling. It's a 1v9." << std::endl
				<< "I'm the only one doing something. Get me out of this dog sh*t elo" << std::endl;
			break;
		case LAG:
			std::cout << "WTF?!! I can not play. My internet is f*cking horse sh*t." << std::endl
				<< "They are f*cking lucky I have high ping" << std::endl;
			break;
	}
	std::cout << std::endl;
}

void Harl::complain(std::string level)
{
	int i;
	int random = rand();
	context = 4 + (random % 3);
	
	void (Harl::*functionPTRS[])( void ) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string complains[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (i = 0; i < 4; i++)
	{
		if (complains[i] == level)
		break;
	}
	
	switch (i)
	{
	case DEBUG:
		(this->*functionPTRS[0])();	//fall through
	case INFO:
		(this->*functionPTRS[1])();	//fall through
	case WARNING:
		(this->*functionPTRS[2])();	//fall through
	case ERROR:
		(this->*functionPTRS[3])();
		break;
	default:
		std::cout << "[Probably raging and complaining on the game he \"loves\"]" << std::endl;
		break;
	}
		
}
