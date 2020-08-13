#include <iostream>

using namespace std;

int main()
{

    int M[6][6];
    int x = 1;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            M[i][j] = x;
            x++;
        }
    }
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
            cout << M[i][j] << " ";
        cout << "\n";
    }
    const int arrlength = ((6 * 6) - 6) / 2;

    int A[arrlength];
    int S2[arrlength];
    int a = 0;
    int b = 0;

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
 
            if (i < j) {
                S2[b] = M[i][j];
                b++;
            }

            if (j < i) {
                A[a] = M[i][j];
                a++;
            }

        }
    }


    for (int i = 0; i < arrlength; i++) {
        if (i == 0) cout << "A {";
        cout << A[i];
        if (i == arrlength - 1) cout << "}" << endl;
        else cout << ",";
    }
    for (int i = 0; i < arrlength; i++) {
        if (i == 0) cout << "S2 {";
        cout << S2[i];
        if (i == arrlength - 1) cout << "}" << endl;
        else cout << ",";
    }
    return 0;
}