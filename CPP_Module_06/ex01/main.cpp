/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 15:21:14 by ntojamur          #+#    #+#             */
/*   Updated: 2023/01/15 15:22:04 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

typedef unsigned long uintptr_t;

typedef struct s_Data {
	std::string	str;
} Data;

uintptr_t serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data *>(raw));
}

int main() {
	Data *data = new Data;
	Data *after;
	uintptr_t ptr;
	data->str = "Reinterpret_cast";

	std::cout << data << " : " << data->str << std::endl;
	ptr = serialize(data);
	after = deserialize(ptr);
	std::cout << after << " : " << after->str << std::endl;
	return(0);
}
