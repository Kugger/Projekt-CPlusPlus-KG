/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10
 * \brief Characters w C++
 * v0.01
 */

#include <iostream>
#include <cstring>
using namespace std;

int main(){

	char mystring0[] = { 'H', 'e', 'l', 'l', 'o'};
	char mystring1[] = { 'H', 'e', 'l', 'l', 'o', '\0'};
	//char mystring1A[] = {'Hello','\0'}; //blad
	char mystring2[] = "Dzień dobry";
	char mystring3[50];

	cout << "mystring0: "<< mystring0 << endl;
	cout << "mystring1: "<< mystring1 << endl;
	cout << "mystring2: "<< mystring2 << endl;
	cout << "mystring3: "<< mystring3 << endl;


	/* Not allowed
	   mystring = "Hello";
	   mystring[] = "Hello";
	   mystring = { 'H', 'e', 'l', 'l', 'o', '\0' };
	   */

	// Assigning values to strings
	mystring3[0] = 'H';
	mystring3[1] = 'e';
	mystring3[2] = 'l';
	mystring3[3] = 'l';
	mystring3[4] = 'o';
	mystring3[5] = '\0';

	//Generally for assigning values to an array, and more specifically to a string of characters, a series of functions like strcpy are used. strcpy (string copy) is defined in the cstring (string.h) library and can be called the following way:
	//strcpy (string1, string2);

	strcpy(mystring3, "Dzień dobry wszystkim");
	cout << "Gdzie to je: " << mystring3 << endl;
	cout << "Obciety string: " << mystring3[10] << endl;


	// Partial copy
	char str1[]= "To be or not to be";
	char str2[40];
	char str3[40];

	/* copy to sized buffer (overflow safe): */
	strncpy ( str2, str1, sizeof(str2) );

	cout << "Wielkosc sizeof str2: " << sizeof(str2) << endl;

	/* partial copy (only 5 chars): */
	strncpy ( str3, str2, 5 );


	cout << str1 << "\n"
		<< str2 << "\n"
		<< str3 << endl;

	/*from cstring
https://www.programiz.com/cpp-programming/library-function/cstring/strlen
strxfrm()
strcoll()
strlen()
strerror()
memset()
strtok()
strstr()
strspn()
strrchr()
strpbrk()
strcspn()
*/

	return 0;
}
