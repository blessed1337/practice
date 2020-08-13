#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

double recurse(double a1, double d, int n);

int main()
{
    double a1 = 0, d = 0;
    int n = 0;
    cout <<"Enter the initial value of the arithmetic progression: " << endl;
    cin >> a1;
    cout <<"Enter its step: "<< endl;
    cin >> d;
    cout << "Enter the serial number of the desired value:" << endl;
    cin >> n;



    cout << "Your n-th number of this progression = " << recurse(a1, d, n) << endl;
    return 0;
}

double recurse(double a1, double d, int n)
{
    if (n == 1) return a1;
    a1 = recurse(a1, d, n - 1);
    return a1 + d;
}