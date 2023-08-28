#include <iostream>
using namespace std;

class Distance {
public :
    int feet, inches;
   
    void gettre()
    {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }

    
    void setter()
    {
        cout << "Feet:" << feet <<
             << "Inches:" << inches << endl;
    }

 
    Distance operator+(Distance& dist1)
    {
        Distance tempD; 
        tempD.inches = inches + dist1.inches;
        tempD.feet = feet + dist1.feet + (tempD.inches / 12);
        tempD.inches = tempD.inches % 12;
        return tempD;
    }
};

int main()
{
    Distance D1, D2, D3;

    cout << "Enter first  distance:" << endl;
    D1.readDistance();
    cout << endl;

    cout << "Enter second distance:" << endl;
    D2.readDistance();
    cout << endl;

   
    D3 = D1 + D2;

    cout << "Total Distance:" << endl;
    D3.dispDistance();

    cout << endl;

  
}
