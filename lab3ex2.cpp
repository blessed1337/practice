#include <iostream>
#include <cmath>
using namespace std;
int F[5][5] = { 0 }, Mins[5], Min, IndexMin, D;

int main()
{
    int i, o;

    for (i = 0; i < 5; i++)
    {
        for (o = 0; o < 5; o++)
        {
            F[i][o] = rand() % 11 - 5;
            cout << F[i][o] << "\t";
        }
        cout << "\n";
    }

    for (o = 0; o < 5; o++)
    {
        D = 1;
        for (i = 0; i < 5; i++)
            if (F[i][o] < 0)
                D *= F[i][o];
        Mins[o] = D;
    }

    cout << "\n";
    for (o = 0; o < 5; o++)
        cout << Mins[o] << "\t";

    Min = Mins[0];
    IndexMin = 0;
    for (o = 1; o < 5; o++)
        if (Mins[o] < Min)
        {
            Min = Mins[o];
            IndexMin = o;
        }

    cout << "\n\nMin = " << Min << "\n";
    cout << "IndexMin = " << IndexMin << "\n";

    return 0;
}