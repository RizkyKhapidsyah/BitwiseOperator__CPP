#include <iostream>
#include <bitset>
#include <string>
#include <conio.h>

using namespace std;

/*
	Bitwise Operator:
	&		: AND	Bitwise AND
	|		: OR	Bitwise Inclusive OR
	^		: XOR	Bitwise Exclusive XOR
	~		: NOT
	<<		: SHL	Shift Bits Left
	>>		: SHR	Shift Bits Right

*/

void printBinary(unsigned short Val, string Nama)
{
	cout << Nama << " = " << bitset<8>(Val) << endl;
}

int main()
{
	unsigned short A = 6;
	unsigned short B = 10;
	unsigned short C;

	cout << "A             = " << A << endl;
	cout << "bitset<8>(A)  = " << bitset<8>(A) << endl << endl;

	cout << "========================" << endl;
	cout << "Contoh 1: Bitwise XOR" << endl;
	cout << "========================" << endl;
	C = A ^ B;
	printBinary(A, "A");
	printBinary(B, "B");
	printBinary(C, "C");
	cout << "C = " << C << endl << endl;

	cout << "========================" << endl;
	cout << "Contoh 2: Bitwise OR" << endl;
	cout << "========================" << endl;
	C = A | B;
	printBinary(A, "A");
	printBinary(B, "B");
	printBinary(C, "C");
	cout << "C = " << C << endl << endl;

	cout << "========================" << endl;
	cout << "Contoh 3: Bitwise AND" << endl;
	cout << "========================" << endl;
	C = A & B;
	printBinary(A, "A");
	printBinary(B, "B");
	printBinary(C, "C");
	cout << "C = " << C << endl << endl;

	cout << "========================" << endl;
	cout << "Contoh 4: Bitwise NOT" << endl;
	cout << "========================" << endl;
	C = ~A;
	printBinary(A, "A");
	printBinary(C, "C");
	cout << "C = " << C << endl << endl;

	cout << "========================" << endl;
	cout << "Contoh 5: Bitwise SHL" << endl;
	cout << "========================" << endl;
	C = A << 2;
	printBinary(A, "A");
	printBinary(C, "C");
	cout << "C = " << C << endl << endl;

	cout << "========================" << endl;
	cout << "Contoh 6: Bitwise SHL" << endl;
	cout << "========================" << endl;
	C = A >> 2;
	printBinary(A, "A");
	printBinary(C, "C");
	cout << "C = " << C << endl << endl;


	_getch();
	return 0;
}
