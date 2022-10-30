#include <iostream>
#include <stdlib.h>
#include <climits>
#include <limits>

bool	is_numeric(char *str)
{
	int i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (!isdigit(str[i]))
			return (false);
		i++;
	}
	return (true);
}

void	toChar(char *input) {
	int charInt = atoi(input);

	if (charInt == 0 && !is_numeric(input))
		std::cout << "char: impossible" << std::endl;
	else if (charInt < 0 || charInt > 127) 
		std::cout << "char: impossible" << std::endl;
	else if (charInt >= 32 && charInt <= 126)
		std::cout << "char: '" << static_cast<char>(charInt) << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
}

void	toInt(char *input) {
	long int intInt = atol(input);

	if (intInt == 0 && input[0] != '0')
		std::cout << "int: impossible" << std::endl;
	else if (intInt < INT_MIN || intInt > INT_MAX)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(intInt) << std::endl;
}

void	toFloat(char *input) {
	float floatFloat = atof(input);

	if (floatFloat == std::numeric_limits<float>::infinity() && input[0] == '-')
		std::cout <<  "float: -inff"  << std::endl;
	else if (floatFloat == std::numeric_limits<float>::infinity())
		std::cout <<  "float: +inff"  << std::endl;
	else if (floatFloat == 0 && !is_numeric(input))
		std::cout << "float: nanf" << std::endl;
	else if ((long double)floatFloat != (int)floatFloat)
		std::cout << "float: " << static_cast<float>(floatFloat) << "f" << std::endl;
	else
		std::cout << "float: " << static_cast<float>(floatFloat) << ".0f" << std::endl;
}

void	toDouble(char *input) {
	double doubleDouble = atof(input);

	if (doubleDouble == std::numeric_limits<double>::infinity() && input[0] == '-')
		std::cout <<  "double: -inf"  << std::endl;
	else if (doubleDouble == std::numeric_limits<double>::infinity())
		std::cout <<  "double: +inf"  << std::endl;
	else if (doubleDouble == 0 && !is_numeric(input))
		std::cout << "double: nan" << std::endl;
	else if ((long double)doubleDouble == (int)doubleDouble)
		std::cout << "double: " << static_cast<double>(doubleDouble) << ".0" << std::endl;
	else
		std::cout << "double: " << static_cast<double>(doubleDouble) << std::endl;
}

void scalarTypeConversion(char *input) {
	toChar(input);
	toInt(input);
	toFloat(input);
	toDouble(input);
}

int main(int argc, char **argv)
{
	if (argc != 2) {
		std::cout << "Bad arguments" << std::endl;
		return (1);
	}
	scalarTypeConversion(argv[1]);

	return (0);
}