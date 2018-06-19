#include <iostream>
#include <math.h> //cmath

using namespace std;

void core()
{

    //ask user
    double total, payment;
    cout << "Total (kr) :";
    cin >> total;
    cout << "Payment (kr) :";
    cin >> payment;
    cout << "===========================================" << endl;
    //if payment is less then total amount
    if (payment < total){
        printf ("Payment is less then total amount \n");
        double fail = total - payment;
        //abs(make negative digit to positive digit)
        //ceil(Round up value)
        //I use ceil coz we need to ask custumer for momeny then the current value
        cout << "custumer need to pay " << ceil(fail) << " more. \nPls ask the custumer kindly :D" << endl;
        cout << "===========================================" << endl;
        core(); // call this method again
    }
    else {
        /*
        The program should exactly describe the minimum number of Swedish bills and coins
        that should be returned rounded off to nearest krona (kr) <<< from readme.md
        */
        int change = round(payment - total);
        cout << "Change: " << change << "kr" << endl;
        cout << "Change displayed in ascending order" << endl;
        cout << "===========================================" << endl;
        
        //1000 500 200 100 50 20 10 5 2 1
        cout << "Thousand: " << change/1000 << endl;
        cout << "Five hundred: " << (change % 1000) / 500 << endl;
        cout << "Two hurndred: " << (change % 500) / 200 << endl;
        cout << "One hundred: " << (change % 200) / 100 << endl;
        cout << "Fifty: " << (change % 100) / 50 << endl;
        cout << "Twenty: " << (change % 50) / 20 << endl;
        cout << "Ten: " << (change % 20) / 10 << endl;
        cout << "Five: " << (change % 10) / 5 << endl;
        cout << "Two: " << (change % 5) / 2 << endl;
        cout << "One: " << (change % 2) / 1 << endl;

    }
}

int main(){
    printf ("This program going to ask user Total(how much custumer need to pay) and Payment (how much custumer paid).\n");
    printf ("The program going to give minimum number of Swedish bills and coins that should be returned rounded off to nearest krona \n");

    core();
}

