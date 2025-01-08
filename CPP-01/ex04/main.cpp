/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 15:58:32 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/08 20:13:39 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int replace(std::string& result, std::string s1, std::string s2)
{
	size_t	found;
	std::string start, end;
	
	found = result.find(s1);

	if (found != std::string::npos)
	{
		start = result.substr(0, found);
		end = result.substr(found + (s1.length()));
		result = start;
		result.append(s2);
		result.append(end);
		return 1;
	}
	else
		return 0;
}

std::string replaceAll(std::string content, std::string s1, std::string s2)
{
	int finish = 1;
	
	while(finish)
		finish = replace(content, s1, s2);
	return content;
}

int main(int argc, char *argv[])
{
	std::fstream inFile, outFile;
	std::string Content, newContent;
	std::string outFileName;

	(void)argc;
	inFile.open(argv[1], std::ios::in);
	if(!inFile)
	{
		std::cerr << "Failed to open the input file" << std::endl;
		return 1;
	}
	
	std::getline(inFile, Content, '\0');
	inFile.close();

	newContent = replaceAll(Content, argv[2], argv[3]);
	
	outFileName = argv[1];
	outFileName.append(".replace");
	outFile.open(outFileName.c_str(), std::ios::out);
	if(!outFile)
	{
		std::cerr << "Failed to open the output file" << std::endl;
		return 1;
	}
	outFile << newContent;
	outFile.close();
}