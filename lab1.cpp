
#include <iostream>

using namespace std;

int main()
{
    float x, y;
    cout << "Enter X" << endl;
    cin >> x;
    cout << "Enter Y" << endl;
    cin >> y;
    if (y <= -4 && y >= -5 && x >= 3 && x <= 5) {
        cout << "Point falls within the shaded area" << endl;
    }
    else if (y <= 0 && y >= -5 && x >= -5 && x <= 0) {
        cout << "Point falls within the shaded area" << endl;
    }
    else {
        cout << "Point does not fall into the shaded area" << endl;

    }
    return 0;
}

