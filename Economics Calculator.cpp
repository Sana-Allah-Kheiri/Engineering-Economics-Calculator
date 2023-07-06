// Economics Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>
using namespace std;
#define LOG cout<<'\n'<<
#define GET cin>>

int main()
{ 
	char tryAgain{ 'y' };
	while (tryAgain == 'y' || tryAgain == 'Y') {
		float p{}, a{}, g{}, f{};
		/*a: annual uniform worth
								  p: present worth
								  g: gradient uniform worth
								  f: future worth

								  */
		system("COLOR F0");
		LOG " Enter interest rate in percentage: ";
		short i{}; // i : interest rate
		GET i;

		LOG " Enter number of Interest periods: ";
		short unsigned int n{};
		GET n;

		LOG " Enter one option from the below list: ";
		LOG "a. Converting P to F.";
		LOG "b. Converting F to P.";
		LOG "c. Converting P to A.";
		LOG "d. Converting A to P.";
		LOG "e. Converting F to A.";
		LOG "f. Converting A to F.";
		LOG "g. Converting G to A.";
		LOG "h. Converting G to P.";
		char option{ ' ' };
		LOG " Enter an option: ";
		GET option;
		if (option == 'a') {
			LOG "Enter P(Present Worth): ";
			GET p;
			LOG "Future Worth = " << float(p * pow((1 + i), n));
		}
		if (option == 'b') {
			LOG "Enter F(Future worth): ";
			GET f;
			LOG " Present Worth = " << float(f / (pow(1 + i, n)));
		}
		if (option == 'c') {
			LOG " Enter P: ";
			GET p;
			LOG " A = " << float(p * ((i * pow(1 + i, n)) / (pow(1 + i, n)) - 1));
		}
		if (option == 'd') {
			LOG "Enter A: ";
			GET a;
			LOG "P : " << float((pow(1 + i, n) - 1) / (i * pow(1 + i, n)));
		}
		if (option == 'e') {
			LOG "Enter F: ";
			GET f;
			LOG "A : " << float(f / pow(1 + i, n) - 1);
		}

		if (option == 'f') {
			LOG "Enter A: ";
			GET a;
			LOG " F = " << float(a * ((pow(1 + i, n) - 1) / i));
		}
		
		if (option == 'g') {
			LOG "Enter G: ";
			GET g;
			LOG " A = " << float(g * ((1 / i) - (n / (pow(1 + i, n) - 1))));
		}

		if (option == 'h') {
			LOG "Enter G: ";
			GET g;
			LOG " P = " << float((float(g / i)) * (((pow(1 + i, n) - 1) / (i * pow(1 + i, n))) - (n / pow(1 + i, n))));
		}


		LOG"Do you want to restart the program?(y/n)";
		GET tryAgain;
	}
}
