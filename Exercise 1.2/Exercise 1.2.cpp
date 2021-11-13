// Exercise 1.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"								// tole je samo za Visual Studio, za tvoj compiler morš zbrisat
#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int uppercase = 0, lowercase = 0, spec_char = 0, digit = 0;
	char	*x = new char[100];					// alociraš nov char array velikosti 100 karakterjev					
	cout << "Enter string: " << endl;			// izpišeš "Enter string: "
	cin >> setw(100) >> x;						// prebereš v x odtipkan string, max 100... pazi, če je vmes SPACE, 
												// bo zaključil že tam... o tem kasneje
	for (char *p = x; *p != '\0'; ++p) {		// definiraš nov pointer p, in ga postaviš na x, 
												// prečešeš array do nule, na koncu zanke ga povečaš 
												// za ena z operatorjem ++
		if (*p >= 'A' && *p <= 'Z')				// dobro beri navodila, hoče da primerjaš če je vsebina 
			++uppercase;						// med A in Z
		else if (*p >= 'a' && *p <= 'z')
			++lowercase;
		else if (*p >= '0' && *p <= '9')
			++digit;
		else
			++spec_char;
	}
	cout << "Uppercase characters: " << uppercase << "\nLowercase characters: " << lowercase << "\nDigits: " << digit << "\nSpecial characters: " << spec_char << endl;

	return 0;
}

