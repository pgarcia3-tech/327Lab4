#include <iostream>
#include "xFactor.h"
using namespace std;
int main (){

    int a, b, c;
    double tol;
    string again;
    int N;
again = "y";

    while (again == "y" || again == "Y"){
        cout << "what are the coefficients of your quadratic? ";
        cin >> a;
        cin >> b; 
        cin >> c;
    
        cout << "what is the tolerance you'd like? ";
        cin >> tol;

        cout << positiveX(a, b, c, tol) << endl;
        cout << negativeX(a, b, c, tol) << endl;

        cout << "again? y or n? ";
        cin >> again;
}
return 0;
}

