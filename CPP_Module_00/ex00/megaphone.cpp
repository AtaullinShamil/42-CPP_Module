/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:18:02 by ntojamur          #+#    #+#             */
/*   Updated: 2022/11/21 13:18:03 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	if (argc == 1){
		std::cout<< "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++){
		for (int j = 0; argv[i][j]; j++){
			std::cout<<(char)toupper(argv[i][j]);
		}
		if (i != argc - 1)
			std::cout<<" ";
	}
	std::cout << std::endl;
	return (0);
}
