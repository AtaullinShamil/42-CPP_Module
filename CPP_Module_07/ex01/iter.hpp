/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 08:36:52 by ntojamur          #+#    #+#             */
/*   Updated: 2023/01/16 09:41:29 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void	iter(T *arr, size_t size, void (*f)(T const &item))
{
	for (size_t i = 0; i < size; i++)
		(*f)(arr[i]);
}

template<typename T>
void func(T const &itm)
{
	std::cout << itm << " : ";
}

#endif
