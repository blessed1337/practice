#include <iostream>
#include <string>
#define MAX_LEN 255 
using namespace std;

int main()
{
    char* S = new char[255];

  cin.getline(S, 255);

    size_t i = 0;
    while (S[i + 1] != '\0')
    {
        if (S[i] == ' ')
        {
            S[i + 1] = toupper(S[i + 1]);
        }
        i++;
    }

    cout << S << endl;

    delete[] S;
}