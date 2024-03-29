/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 08:36:52 by ntojamur          #+#    #+#             */
/*   Updated: 2023/01/16 10:06:21 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
class Array
{
	private:
		int		_size;
		T		*arr;

	public:
		Array<T>( void ):
			_size(0), arr(NULL)
		{
		}
		Array<T>( const unsigned int size ):
			_size(size)
		{
			if (size < 0)
				throw std::overflow_error("Index out of bounds");
			this->arr = new T[size];
		}
		Array<T>( const Array<T> &other )
		{
			this->_size = 0;
			this->arr = NULL;
			*this = other;
		}
		~Array<T>( void )
		{
			if (this->_size > 0)
				delete [] this->arr;
		}
		Array<T>	&operator=( const Array<T> &other )
		{
			if (this == &other)
				return *this;
			if (this->_size)
				delete [] this->arr;
			this->_size = other.size();
			this->arr = new T[this->_size];
			for (int i = 0; i < this->_size; i++)
				this->arr[i] = other[i];
			return *this;
		}
		T	&operator[](const int index) const
		{
			if (index >= this->_size || index < 0)
				throw std::overflow_error("Index out of bounds");
			return this->arr[index];
		}
		int	size( void ) const
		{
			return this->_size;
		}
};

#endif
