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
    cout << "------------------------------------------" << endl;
    //if payment is less then total amount
    if (payment < total){
        printf ("Payment is less then total amount \n");
        double fail = total - payment;
        //abs(make negative digit to positive digit)
        //ceil(Round up value) 
        //I use ceil coz we need to ask custumer for momeny then the current value
        cout << "custumer need to pay " << ceil(fail) << " more. \nPls ask the custumer kindly :D" << endl;
        cout << "------------------------------------------" << endl;
        core(); // call this method again
    }

    /*
    The program should exactly describe the minimum number of Swedish bills and coins 
    that should be returned rounded off to nearest krona (kr) <<< from readme.md
    */
    int change = round(payment - total);
    //1000 500 200 100 50 20 10 5 2 1
    cout << change << "kr" << endl;
}

int main(){
    printf ("This program going to ask user Total(how much custumer need to pay) and Payment (how much custumer paid).\n");
    printf ("The program going to give minimum number of Swedish bills and coins that should be returned rounded off to nearest krona \n");

    core();
}

