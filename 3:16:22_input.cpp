
//Write a C++ program where you define /declare three integer variables
//num1, num2 and num3,
//assign the following sequence to them 3,4,7.
//rather than fixing the values of the variables num1, num2, num3, we would like to get those values from the user
//to read values from the user. we use cin.
// cin >> variableName; we will read a value from the keyboard and save it in variableName.
// In our case here we need to read three values
//find the average of the three variables
// before  reading a value from a user display an invite letting him know what you expece



#include <iostream> 
#include <cmath>

using namespace std;

int main () {
    float N;
    float P;
    cout << "Enter the value for n: ";
    cin >> N;
    cout << "Enter the value for p: ";
    cin >> P;
    // cout << "Enter the value for num3: "
    //cin >> num3;


    double x = ( sqrt((pow(n, 3.0))*(pow((p-1), 2.0))/(pow(p, 4.0))*((pow(pow(n, 4.0)-3),2.0))) );
    float averageFinal = ( x );

    cout << "Answer is " << averageFinal << " . "  << endl;

    return 0;
}