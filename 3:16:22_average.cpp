
//Write a C++ program where you define /declare three integer variables
//num1, num2 and num3,
//assign the following sequence to them 3,4,7.
//find the average of the three variables



#include <iostream> 

using namespace std;

int main () {

    int num1 = 3;
    int num2 = 4;
    int num3 = 7;

    float average = ( num1 + num2 + num3 );
    float averageFinal = ( average / 3.0 );

    cout << "Average is " << averageFinal << " . "  << endl;

    return 0;
}