// SelectionrepSwitchJoshtopp1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	float firstDigit;
	std::cout << "Enter the first digit of the equation : ";
	std::cin >> firstDigit;

	char operand;
	std::cout << "Enter the operand you wish to use in the equation : ";
	std::cin >> operand;

	float secondDigit;
	std::cout << "Enter the esecond digit of the equation : ";
	std::cin >> secondDigit;

	switch (operand)
	{
	case '+':
		cout << firstDigit << " + " << secondDigit << " = " << firstDigit + secondDigit;
		break;
	case '-':
		cout << firstDigit << " - " << secondDigit << " = " << firstDigit - secondDigit;
		break;
	case '*':
		cout << firstDigit << " * " << secondDigit << " = " << firstDigit * secondDigit;
		break;
	case '/':
		cout << firstDigit << " / " << secondDigit << " = " << firstDigit / secondDigit;
		break;
	default:
		cout << "please enter a valid operand next time     ";
		main();

	}
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
