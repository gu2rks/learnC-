#include <iostream>

using namespace std;

int main(){
    int hours, min, sec, total;
    cout << "Gimme total seconds";
    cin >> total;
    //hr
    hours = total/3600;
    //take out hr
    total = total - (hours*3600);
    //min
    min = total/60;
    //take out min
    total = total - (min*60);
    sec = total;

    cout << hours << "hr" << min << "minuters" << sec << "seconds \n";

}