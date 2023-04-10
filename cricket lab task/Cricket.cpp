// Cricket.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<iostream>
#include<string>
#include<string.h>
#include"All rounder.cpp"
#include"Player.cpp"
#include"Batsman.cpp"
#include"Bowler.cpp"
#include"Wicket kepper.cpp"
using namespace std;

int main()
{
	Batsman obj1("Right", 5, 15, 20, "guzaib", 55, 10, 50, 30);
	obj1.getBatsman();
	Bowler obj2("Fast", 57, 40, 70, 20, "guzaib", 55, 10, 50, 30);
	obj2.getBowler();
	AllRounder r1("Right", 5, 15, 20, "Fast", 57, 40, 70, 20, "guzaib", 55, 10, 50, 30);
	r1.get_allr();
	WicketKeeper w1("right", 45, 3, 5, "guzaib", 55, 10, 50, 30);
	w1.getWicketKeeper();
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
