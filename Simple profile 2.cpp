// Simple User Profile.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>

using namespace std;
int main()

{
    string name1, name2, bothnames, meal, movie;
    cout << "  Kimanis User Profile : \n";
    cout << " \n ";
    cout << " Enter your First Name : \n";
    cin >> name1; "\n ";

    cout << " Enter your Second Name : \n";
    cin >> name2;


    cout << "Input your Favorite meal : \n";
    cin >> meal;

    cout << "Input your Favorite Movie : \n";
    cin >> movie;
    cout << "................\n";
    cout << "................\n";

    cout << "I am "<< name1 +  name2  << " \n";
    cout << "My Favourite Meal is "<< meal  << " and \n";    
    cout << "My Favourite Movie is " << movie << " \n";

    return 0;
}