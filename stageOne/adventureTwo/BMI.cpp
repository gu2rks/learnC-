#include <iostream>

using namespace std;
int main (){
    double length, weight, ibm;
    cout << "What is ur length? (meters)";
    cin >> length;
    cout << "what is ur weight? (kg) ";
    cin >> weight;
    ibm = weight/(length*length);
    cout << "Your IBM is \n" << ibm;
}