#include <iostream>
using namespace std;

double myabs (double x){
    if (x < 0) {
        return -x;
    }
    else {
        return x;
    }
}

double sqrf (double N, double tol){
double guess;
double p;
guess = N;
if (N == 0){
    return 0;
}
p = myabs(guess - N/guess);
while (p > tol){
    guess = (guess + N/guess)/2;
    p = myabs(guess - N/guess);
}
return guess;
}

double positiveX (int a, int b, int c, double tol) {
    double x;
    x = (-b + sqrf(b*b - 4*a*c, tol))/(2*a);
    return x;
}

double negativeX (int a, int b, int c, double tol) {
    double x;
    x = (-b - sqrf(b*b - 4*a*c, tol))/(2*a);
    return x;
}