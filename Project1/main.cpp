#include <iostream>
#include <string>
using namespace std;

std::string Calc_Sys(int n, int sys)
{
	string result = "";
	while (n > 0 && sys <= 10)
	{
		result = to_string(n % sys) + result;
		n /= sys;
	}
	return result;
}

int main()
{
	int number, calculus_sys;
	cout << "number: "; 
	cin >> number;

	cout << "\ncalculus system: ";
	cin >> calculus_sys;

	string str = Calc_Sys(number, calculus_sys);

	cout << "\nresult: " << str;

	return 1;
}
