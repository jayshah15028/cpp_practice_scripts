#include <iostream>
using namespace std;

int main(){

    double nSeconds;
    cin >> nSeconds;

    double hours,minutes,seconds;
    hours = (int)(nSeconds/3600);
    minutes = (int)(((int)nSeconds%3600)/60);
    seconds = (int)((((int)nSeconds%3600)%60));
    cout << hours << endl;
    cout << minutes << endl;
    cout << seconds << endl;

    return 0;
}