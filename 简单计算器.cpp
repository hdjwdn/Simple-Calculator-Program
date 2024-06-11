#include<iostream>

int main() {
	int firstNumber, secondNumber, result;
	char anOperator;

	std::cout << "Enter first number: ";
	std::cin >> firstNumber;
	std::cout << "Enter an operator(+, -, *, /): ";
	std::cin >> anOperator;
	std::cout << "Enter second number: ";
	std::cin >> secondNumber;

	switch (anOperator) {
	case '+':
		result = firstNumber + secondNumber;
		std::cout << "Result: " << firstNumber << "+" << secondNumber << "=" << result << std::endl;
		break;
	case '-':
		result = firstNumber - secondNumber;
		std::cout << "Result: " << firstNumber << "-" << secondNumber << "=" << result << std::endl;
		break;
	case '*':
		result = firstNumber * secondNumber;
		std::cout << "Result: " << firstNumber << "*" << secondNumber << "=" << result << std::endl;
		break;
	case '/':
		if (secondNumber == 0) {
			std::cout << "Error. Division by zero is not allowed." << std::endl;
		}else{
			result = firstNumber / secondNumber;
			std::cout << "Result: " << firstNumber << "/" << secondNumber << "=" << result << std::endl;
		}
		break;
	default:
		std::cout << "Invaild operator. Please enter one of (+, -, *, /)." << std::endl;
	}
	return 0;
}