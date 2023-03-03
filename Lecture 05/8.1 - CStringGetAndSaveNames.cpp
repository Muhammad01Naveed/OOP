//What is wrong with code segment below?
#include<iostream>
using namespace std;

void main()
{	
	/*char* firstName =0;
	char* lastName = 0;

	cout << "Enter First Name:\t";
	cin >> firstName;	

	cout << "Enter Last Name:\t";
	cin >> lastName;	

	cout << "User Entered Name:\t" << firstName << " " << lastName << endl << endl;
*/


	//char arr1[20];
	//char arr2[20];

	//char* firstName = arr1;
	//char* lastName = arr2;

	//cout << "Enter First Name:\t";
	//cin >> firstName;	

	//cout << "Enter Last Name:\t";
	//cin >> lastName;	

	//cout << "User Entered Name:\t" << firstName << " " << lastName << endl << endl;

	
	char* firstName = new char[20];
	char* lastName = new char[20];

	cout << "Enter First Name:\t";
	cin >> firstName;	

	cout << "Enter Last Name:\t";
	cin >> lastName;	

	cout << "User Entered Name:\t" << firstName << " " << lastName << endl << endl;
}