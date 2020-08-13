#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;

int main()
{
	int R[10] = {};
	int min[5];
	int i = 0;
	int j = 0;

	srand(time(NULL));
	for (i = 0; i < 10; i++)
	{
		R[i] = rand() % 101 - 50;
		cout << R[i] << endl;
	}
	{
		min[i] = R[0];
		for (j = 0; j < 5; ++j)
			if (min[i] > R[j])
				min[i] = R[j];
	}
	cout << min[i] << endl;

	return 0;
}