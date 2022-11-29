/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 02:05:16 by ntojamur          #+#    #+#             */
/*   Updated: 2022/11/29 03:04:19 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

std::string	replace_string(std::string &line, std::string &search, std::string &replace)
{
	int		search_size = search.size();
	size_t	index;

	while ((index = line.find(search)) != std::string::npos){
		line = line.insert(index + search_size, replace);
		line = line.erase(index, search_size);
	}
	return (line);
}

int	replace(std::ifstream &infile, std::string name, std::string search, std::string replace){
	std::string		out_name(name + std::string(".replace"));
	std::string		line;
	std::ofstream	outfile;

	outfile.open(out_name.c_str());
	if (outfile.is_open() == 0){
		std::cout << "Error: can`t create a file\n";
		infile.close();
		return (1);
	}
	else{
		while (std::getline(infile, line)){
			outfile << replace_string(line, search, replace);
			if (!infile.eof())
				outfile << '\n';
		}
		infile.close();
		outfile.close();
		return (0);
	}
}

int	main(int argc, char **argv){
	std::ifstream infile;

	if (argc != 4){
		std::cout << "Error: Bad arguments" << std::endl;
		return (1);
	}
	if (std::string(argv[1]).length() == 0){
		std::cout << "Error: filename is empty" << std::endl;
		return (1);
	}
	if (std::string(argv[2]).length() == 0){
		std::cout << "Error: string to search is empty" << std::endl;
		return (1);
	}
	if (std::string(argv[3]).length() == 0){
		std::cout << "Error: string to replace is empty" << std::endl;
		return (1);
	}
	infile.open(argv[1]);
	if (infile.is_open() == false){
		std::cout << "Error: no such file or directory\n";
		return (1);
	}
	return (replace(infile, argv[1], argv[2], argv[3]));
}
