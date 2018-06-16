#include <iostream>

using namespace std;

int main()
{   
    int first, second, third;
    printf ("Gimme three digit numbers \n");
    cout << "1st digit pls: ";
    cin >> first;
    cout << "2nd digit pls: ";
    cin >> second;
    cout << "3rd digit pls: ";
    cin >> third;
    int total = first + second + third;
    cout << "The sum of " << first << "+" 
    << second << "+" << third << " = "<< total <<"\n";
}