#include <iostream>
#include <string>

std::string Calc_Sys(int n, int sys)
{
	std::string result = "";
	while (n > 0)
	{
		result = std::to_string(n % sys) + result;
		n /= sys;
	}
	return result;
}

int main()
{
	int number, calculus_sys;
	std::cout << "number: "; 
	std::cin >> number;

	std::cout << "\ncalculus system: ";
	std::cin >> calculus_sys;

	std::string str = Calc_Sys(number, calculus_sys);

	std::cout << "\nresult: " << str;

	return 1;
}