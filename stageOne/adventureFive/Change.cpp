#include <iostream>

using namespace std;


int main ()
{   
    printf ("This program going to ask user Total(how much custumer need to pay) and Payment (how much custumer paid).\n");
    printf ("The program going to give minimum number of Swedish bills and coins that should be returned rounded off to nearest krona \n");
    //ask user
    int total, payment;
    cout << "Total (kr) :";
    cin >> total;
    cout << "Payment (kr) :";
    cin >> payment;

    //if payment is less then total amount
    if (payment < total){
        printf ("Payment is less then total amount \n");
        int change = payment - total;
        //abs(make negative digit to positive digit)
        cout << "costumer need to pay" << abs(change) << " more. \nPls ask the custumer kindly :D" << endl;
        main();
    }

    int change = payment - total;
    //1000 500 200 100 50 20 10 5 2 1
    cout << change << "kr \n";
}