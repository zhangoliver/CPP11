// InitializerListDemo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <initializer_list>
#include <vector>

using namespace std;

//Note: the initializer_list v is inmutable
void func(initializer_list<int> v) {
	for (int i : v) {
		cout << i << "\n";
	}
}

class C {
public:
	C() {
		cout << "default constructor\n";
	};
	C(initializer_list<int>) {
		cout << "initializer_list constructor\n";
	};
	C(int) {
		cout << "single int constructor\n";
	};
};

int main() {
	//1. using {}
	vector<int> v1{ 1 };
	vector<int> v2 = { 1 };
	vector<int> v3(1); //one element vector with default 0

	//2. passing an initializer list
	func({ 1, 2, 3 });

	//3. Constructor ambiguity and precedence
	C c1{};
	C c2{ 1 };
	C c3(1);

	return 0;

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
