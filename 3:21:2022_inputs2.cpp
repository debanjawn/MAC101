#include <iostream>
#include <cmath>
using namespace std;


int main() {
    int n; // make integer n1

    double e ; // make double e
    double s; // make double s
    
    cout << "Enter the value for n: ";
    cin >> n; // input n
    cout << "Enter the value for e: ";
    cin >> e; // input e
    cout << "Enter the value for s: ";
    cin >> s; // input s

    double p1 = pow(n,4.0); // set n to the 4th power
    double p2 = pow(e,3.0); // set e to the 3rd power
    double p3 = (p1) * (p2); // multiply (n^4)and(e^3)

    double p4 = abs(e); // take the absolute value of e
    double p5 = sin(s); // take sin of s
    double p6 = pow(p4,p5); // take (absolute value of e) and set it to (sin(s)) power

    double p7 = (p3) / (p6); // this is dividing the top numerator by the bottom denominator

    double p8 = pow(p7,(1/5.0)); // we take the whole fraction and set it to 1/5 power

    cout << "Answer is " << p8 << " . "  << endl; // printing the answer
    return 0;
}