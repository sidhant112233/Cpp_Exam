#include<iostream>
#include<string.h>
using namespace std;

struct Distance {
    int feet;
    float inch;
}d1 , d2, sum;

main() {
    cout << "Enter 1st distance," << endl;
    cout << "Enter feet: ";
    cin >> d1.feet;
    cout << "Enter inch: ";
    cin >> d1.inch;

    cout << "Enter for 2nd distance" << endl;
    cout << "Enter feet: ";
    cin >> d2.feet;
    cout << "Enter inch: ";
    cin >> d2.inch;

    sum.feet = d1.feet+d2.feet;
    sum.inch = d1.inch+d2.inch;

    if(sum.inch > 12) {
     
        int extra = sum.inch / 12;

        sum.feet += extra;
        sum.inch -= (extra * 12);
    } 

    cout<< "Sum of distances = " << sum.feet<<endl
		<< " feet  " << sum.inch<<endl 
		<< " inches"<<endl;
   
}


