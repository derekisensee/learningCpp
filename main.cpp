// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h" //visual studio needs this
#include "add.h"
#include <iostream>
#include <string>

//int addNumbers(int x, int y); this isn't needed because we use add.h!

int main() {
	using namespace std; //better practice to put things here apparently
	int x;
	int y;

	cout << "This program adds numbers. Enter two numbers to add:" << endl;

	cout << "Number 1: ";
	cin >> x;
	cout << "Number 2: ";
	cin >> y;

	cout << "Result: " << addNumbers(x, y) << endl;
	//system("pause"); //for keeping the console from immediately closing when running learningCpp.exe. kinda hacky, find a better way to pause the console.
	return 0;
}