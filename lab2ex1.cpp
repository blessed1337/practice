#include <iostream>
#include <cstdlib>

using namespace std;


int main()
{
	int M[12], max, min, dif;

	cout << "The elements: |";
	for (int i = 0; i < 12; i++)
	{
		M[i] = rand() % 200;
		cout << M[i] << "|";
	}
	cout << endl;

	max = M[0];
	min = M[0];
	for (int i = 1; i < 12; i++)
	{
		if (max < M[i]) max = M[i];
		if (min > M[i]) min = M[i];
	}
	cout << "Min: " << min << endl;
	cout << "Max: " << max << endl;
	dif = abs(max) - abs(min);
	cout << "Greatest modulus of difference: " << dif << endl;

	return 0;
}