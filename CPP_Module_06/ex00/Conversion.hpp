#ifndef CONVERSION_HPP
#define CONVERSION_HPP

# include <iostream>
# include <iomanip>
# include <sstream>
# include <string>
# include <cctype>
# include <cmath>
# include <limits>

#define CHAR "char: "
#define INT "int: "
#define FLOAT "float: "
#define DOUBLE "double: "
#define IMP "impossible"
#define ND "Non displayable"

class Conversion {
private:
		Conversion();
		static const std::string types_out[4];

		std::string input;
		int		impos[4];
		int		type;
		char	ichar;
		int		iint;
		float	ifloat;
		double	idouble;

		enum Types {
			Char = 0,
			Int,
			Float,
			Double,
			Invalid,
		};

		void	parse(void);
		void	convert(void);

	public:
		Conversion(std::string input);
		Conversion(Conversion const &other);
		~Conversion();
		Conversion &operator=(Conversion const &other);

		void	print(void);
};

#endif
