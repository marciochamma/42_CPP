/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:07:03 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/18 17:14:09 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
	: AForm("ShrubberyCreationForm", 145, 137), _target("Home")
{
	std::cout <<"ShrubberyCreationForm: default constructor" <<std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout <<"ShrubberyCreationForm: parameter constructor" <<std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy)
	: AForm("ShrubberyCreationForm", 145, 137), _target(copy._target)
{
	std::cout <<"ShrubberyCreationForm: copy constructor" <<std::endl;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout <<"ShrubberyCreationForm: destructor" <<std::endl;
	return ;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	if (this != &other)
	{
		this->_target = other._target;
	}
	std::cout <<"ShrubberyCreationForm: assignment operator" <<std::endl;
	return (*this);
}

void	ShrubberyCreationForm::action(void) const
{
	std::string	filename;

	filename = this->_target + "_shrubbery";
	std::ofstream outputfile(filename.c_str());
	
	outputfile << "               ,@@@@@@@,						" << std::endl;
	outputfile << "       ,,,.   ,@@@@@@/@@,  .oo8888o.			" << std::endl;
	outputfile << "    ,&@@&%&&%,@@-VER-@@@@<@,8888\\88/8o		" << std::endl;
	outputfile << "   ,%&VAI&&%&&%,@@@\\@@@/@@@88\\88888/88'	" << std::endl;
	outputfile << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'		" << std::endl;
	outputfile << "   %&&%/ %&//&&@@\\ V /@@' `88\\8 `/88'		" << std::endl;
	outputfile << "   `&%\\ ` /%&'   |||        \\ '|8'			" << std::endl;
	outputfile << "       |o|        |||         | |			" << std::endl;
	outputfile << "       |.|        |||         | |			" << std::endl;
	outputfile.close();

	return ;
}
