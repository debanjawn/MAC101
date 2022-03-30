#include <iostream>
#include <cmath>
using namespace std ;


/*

    Very Often in the flow of a program we reach a point where there are multiple choices. In order to make a decision on which path the excution follows, 
    we selection statements to select which direction to take.

    if(condition) {
        instructionsA
    }
    else(condition) {
        instructionsB
    }

    InstructionA could be any code, including another if-else, loopsetc... as complicated as it may be. same for instructionsB

    Condition evaluates into only two values: true or false. In C++, only 0 is false, anything else is comparators are very often used in conditions.

    > is greater
    >= is greater or equal 
    < is smaller
    <= is smaller or equal 
    == is equal (different from =)
    ! not negates anything that is applied to
    != is it not equal (is it different)
    !> not greater 
    !true is same as false, and !false is true 
    || is or
    && is and

    Logical OR || A || B is always true unless both A and B are false
    A   B   A && B
    T   T      T
    T   F      F
    F   T      F
    F   F      F

    You tell me what is the value of each of the following conditions:
    int var1 = 3, var2 = 5, var3 = 6;

    1) var1 >= 0, true

    2) var3 || var2 < var1, false
            T || F = F
    3) var1 >= 0 && (var2 > var3 || V3 > 0), 
            T && ( F || T), T && T = True
    4) !(var1 <= 0 && var3 > 0) || var1 < 0 
        !(F && T) || F,
         !(F ) || F
         T || F = True
    5) !(var2 && (var1 < 0 || var3 > 0))
       !(T && (F || T))
       !(T && T)
       !(T) = False

Second Order Equations.
aX^2 + bX + c = 0
2X^2 - 3X + 5 = 0

a = 2
b = -3
c = 5

Compute the dicriminant 
D = b^2 - 4ac
if (D > 0) Then we have to distinct solutions 
    X1 = (-b + sqrt(D))/(2a)
    X2 = (-b - sqrt(D))/(2a)
else if (D == 0) Then there is no real solution.
    X = -b/(2a)
else 
no real solutions
*/

int main() {
    //declare three doubles a, b, and c for the coefficients 

	//get values for the coefficients from the user

	//display the equation in the form aX^2 + bX + c = 0;

	//declare a variable for the discriminant D

	//Compute the dicriminant D 

	//display the discriminant

    double a;
    cout << "Enter the value for a: ";
    cin >> a;
    double b;
    cout << "Enter the value for b: ";
    cin >> b;
    double c;
    cout << "Enter the value for c: ";
    cin >> c;

    cout << "The equation is " << a << "^2 + " << b << "x +" << c << endl;


    double d;
    d = (pow(b,2)) - (4*a*c);
    cout << "The Discriminant D is " << d << endl;



    //Test if the discriminant is positive then compute two distinct solutions X1 and X2 
	//and display them. No else  

	//Test if the discriminant is 0 then displauy the solution as being double X = -b/2a

	//Test if the discriminant is begative display a message, no real solutions. 
    double X1;
    double X2;
    X1 = (-b + sqrt(d))   / (2*a);
    X2 = (-b - sqrt(d))   / (2*a);

    double X3;
    X3 = ( -b / (2*a));


    if (d > 0 ) {
        cout << "X1 is " << X1 << "and X2 is " << X2 << "." << endl;
    }
    else if(d == 0){
        cout << "X is " << X3 << "." << endl;
    }
    else if(d < 0){
        cout << "No real solutions." << endl;
    }



}



