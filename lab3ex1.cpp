#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    srand((unsigned)time(NULL));
    int  count = 0;
    double sr, sum = 0;
    
    int** arr = new int* [4];
    for (int i = 0; i < 4; i++)
        arr[i] = new int[5];
    cout << "Array:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            arr[i][j] = rand() % 41 - 20;
            cout << arr[i][j] << '\t';
        }
        cout << endl;
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (arr[i][j] < 0) {
                sum += arr[i][j];
                count++;
            }
        }
    }
    sr = sum / count;
    cout << "Arithmetic mean of negative numbers" << sr << endl;
    delete[] arr;
    system("pause");
    return 0;
}