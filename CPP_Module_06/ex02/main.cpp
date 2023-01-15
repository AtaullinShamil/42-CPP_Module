/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 15:20:17 by ntojamur          #+#    #+#             */
/*   Updated: 2023/01/15 15:20:18 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

class Base {
	public:
		virtual ~Base() {};
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

void identify(Base *p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << p << " is instance of A\n";
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << p << " is instance of B\n";
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << p << " is instance of C\n";
	else
		std::cout << p << " is not instance of A, B or C\n";
}

void identify(Base& p)
{
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << &p << " is instance of A\n";
		return ;
	} catch(std::exception &ex) {};

	try {
		(void)dynamic_cast<B&>(p);
		std::cout << &p << " is instance of B\n";
		return ;
	} catch(std::exception &ex) {};

	try {
		(void)dynamic_cast<C&>(p);
		std::cout << &p << " is instance of C\n";
		return ;
	} catch(std::exception &ex) {};

	std::cout << &p << " is not instance of A, B or C\n";
}

int	main()
{
	srand(time(NULL));

	Base *ptrBase = new Base;
	Base *ptrA = new A;
	Base *ptrB = new B;
	Base *ptrC = new C;

	identify(ptrBase);
	identify(ptrA);
	identify(ptrB);
	identify(ptrC);

	Base base;
	A a;
	B b;
	C c;

	identify(base);
	identify(a);
	identify(b);
	identify(c);
	return (0);
}
