/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Subst.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 07:46:35 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/09 08:25:12 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Subst.hpp"

Subst::Subst(const std::string& filename, const std::string& s1, const std::string& s2)
{
	this->_filename = filename;
	this->_s1 = s1;
	this->_s2 = s2;
	return ;
}

Subst::~Subst(void)
{
	return ;
}

bool	Subst::ft_replace(void)
{
	// Convert filename (std::string) to const char* using c_str()
	std::ifstream inputFile(this->_filename.c_str());
	if (!inputFile)
	{
		std::cerr << "Error: Could not open the file " << std::endl;
		return (false);
	}

	// Convert filename + ".replace" (std::string) to const char* using c_str()
	std::ofstream outputFile((this->_filename + ".replace").c_str());
	if (!outputFile)
	{
		std::cerr << "Error: Could not create output file" << std::endl;
		return (false);
	}

	std::string line;
	while (std::getline(inputFile, line))
	{
		size_t pos;
		while ((pos = line.find(this->_s1)) != std::string::npos) // npos = no position
		{
			line.erase(pos, this->_s1.length());
			line.insert(pos, this->_s2);
		}
		outputFile <<line <<std::endl;
	}
	
	inputFile.close();
	outputFile.close();
	return (true);
}
