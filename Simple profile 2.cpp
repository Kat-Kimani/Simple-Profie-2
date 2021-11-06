// Simple User Profile.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name1, name2, meal, movie;
    //string fullname = name1 + " "+  name2;
    
    cout << "  Kimanis User Profile : \n" ;
    cout << " \n ";
    cout << " Enter your First Name : \n" ;
    getline (cin, name1);

    cout << " Enter your Second Name : \n";
    getline(cin, name2);

    cout << "Enter your Favorite meal : \n";
    getline(cin, meal);

    cout << "Enter your Favorite Movie : \n";
    getline (cin, movie) ; 

    cout << "\n";

    cout <<" My simple Profile!  \n";
    cout <<"\n";
    cout <<" My is Full Name is " << name1 + " " + name2 << ".\n";
    cout <<" My Favorite Meal is " <<  meal  <<  " .\n"; 
    cout <<" My Favorite Movie is " <<  movie  << " .\n"; 
    cout <<" And I am Awesome :-) .\n"; 

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
//   6. In the future, 
