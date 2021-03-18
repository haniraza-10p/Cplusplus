#include <iostream>
using namespace std;

double division(int a, int b) {
   if( b == 0 ) {
      throw "Division by zero condition!";
   }
   return (a/b);
}

int main(){
//	try {
//		int age = 15;
//		if (age >= 18) {
//		cout << "Access granted - you are old enough.";
//		} else {
//		throw (age);
//		}
//	}
//	catch (int myNum) {
//	  cout << "Access denied - You must be at least 18 years old.\n";
//	  cout << "Age is: " << myNum;
//	}

	try {
		int age =20;
		if (age >= 18) {
		cout << "Access granted - you are old enough.";
		} else {
		throw 505;
		}
	}
	catch (int myNum) {
	  cout << "Access denied - You must be at least 18 years old.\n";
	  cout << "Error number: " << myNum;
	}
}
