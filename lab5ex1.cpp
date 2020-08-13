#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
    srand(time(NULL));
    const int M = 3;
    const int N = 3;
    int min, minI;
    int mas[N][M], mas1[N][M];
    cout << "original matrix" << endl;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            mas[i][j] = rand() % 101-20;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            cout << mas[i][j] << " ";
        cout << endl;
    }
    min = mas[0][0];
    minI = 0;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
        {
            if (mas[i][j] < min) {
                min = mas[i][j];
                minI = i;
            }
        }
    int k = 0;
    for (int i = 0; i < N; i++)
    {
        if (i != minI)
        {
            for (int j = 0; j < M; j++)
            {
                mas1[k][j] = mas[i][j];
            }
            k++;
        }
    }
    for (int j = 0; j < M; j++)
        mas1[k][j] = mas[minI][j];
    cout << "transformed matrix" << endl;
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < M; j++)
        {
            mas[i][j] = mas1[i][j];
            cout << mas[i][j] << " ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}