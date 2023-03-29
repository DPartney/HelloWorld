#include <iostream>

int main()
{
	std::cout << "01_week Hello World!\n";

	int ival1 = -1;
	short sval2 = 3;
	long lval1 = 123456789;
	int ival3 = 42;
	float fval1 = 23;
	char cval1 = 'a';

	std::cout << "\nival1 = " << ival1 << " address = " << &ival1;
	std::cout << "\nsval2 = " << sval2 << " address = " << &sval2;
	std::cout << "\nival3 = " << ival3 << " address = " << &ival3;
	std::cout << "\n" << (&ival1 - &ival3);

	std::cout << "\nSize of char = " << sizeof(cval1);
	std::cout << "\nSize of short = " << sizeof(sval2);
	std::cout << "\nSize of int = " << sizeof(ival1);

	int* iPtr = NULL;
	iPtr = &ival1;
	std::cout << "\nValue of ptr variable = " << iPtr;
	std::cout << "\niPtr address = " << &iPtr;
	std::cout << "\nSize of iPtr = " << sizeof(iPtr);
	std::cout << "\nvalue iPtr points to = " << *iPtr;

	std::cout << "\nTo change or not to change";


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging9 menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started:
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file