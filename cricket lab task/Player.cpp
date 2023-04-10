#include<iostream>
#include"Player.h"
using namespace std;
class Player 
{
	public:
		string name;
		int jersey_no;
		int arr[3];
		Player() 
		{
			cout << "default constructor of player" << endl;
		}
		Player(string name, int jersey_no, int odi, int T20, int test) 
		{
			this->name = name;
			this->jersey_no = jersey_no;
			arr[0] = odi;
			arr[1] = T20;
			arr[2] = test;
		}
		void get_player() 
		{
			cout << "Name: " << name << endl;
			cout << "Jersey no: " << jersey_no << endl;
			cout << "Odi : " << arr[0] << endl;
			cout << "T20 rating : " << arr[1] << endl;
			cout << "test rating : " << arr[2] << endl;
		}
	~Player();
};