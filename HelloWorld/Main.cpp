#include <iostream>
#include "Log.h"

// Operations
int Multiply(int a, int b)
{
	return a * b;
}
int Division(int a, int b)
{
	return a / b;
}
int Addition(int a, int b)
{
	return a + b;
}
int Substraction(int a, int b)
{
	return a - b;
}
// Functions
void MultiplyAndLog(int a, int b)
{
	int result = Multiply(a, b);
	//std::cout << result << std::endl;
	Message(result);
}

void DivisionAndLog(int a, int b)
{
	int result = Division(a, b);
	Message(result);
}
void AdditionAndLog(int a, int b)
{
	int result = Addition(a, b);
	Message(result);
}

void SubtractionAndLog(int a, int b)
{
	int result = Substraction(a, b);
	Message(result);
}
int main()
{
	//int variable = 8; // -2b - 2b || INT 4 Bytes || 1 byte is 8 bits ( 4bytes = 32 bits )
	// 32 bits, one bit is signed for positive or negative. 2^31 = 2b
	// unsigned in front of int = always positive 2^32 = 4b
	// char is 1 bit, short is 2 bit, int is 4, long is 4, long long is 8
	// char used for mainly characters
	// char a = 'A';
	// float, double for decimal 
	// float variable = 5.5f;
	// float 4 bytes of data ex: 5.5
	// double var == 5.2;
	// bool variable = true or false
	// bool is 1 bit of memory
	// sizeof(int) display size memory
	// pointers bool*
	// references bool&

	// int result = Multiply(5, 6);
	MultiplyAndLog(4, 6);
	MultiplyAndLog(3, 9);
	MultiplyAndLog(2, 8); 
	DivisionAndLog(10, 2);
	AdditionAndLog(100, 250);
	SubtractionAndLog(100, 75);
	Log("Test Passed");
	std::cin.get();
}