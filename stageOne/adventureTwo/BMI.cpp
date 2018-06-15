#include <iostream>

using namespace std;
int main (){
    double length, weight, ibm;
    cout << "What is ur length? ";
    cin >> length;
    cout << "what is ur weight? ";
    cin >> weight;
    ibm = weight/(length*length);
    cout << "Your IBM is \n" << ibm;
}