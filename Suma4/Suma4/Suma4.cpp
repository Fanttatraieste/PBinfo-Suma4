#include <iostream>

using namespace std;


int main()
{
	long long n;

	cin >> n;
	
	int vf[11] = { 0 };

	vf[1] = 1;
	vf[2] = 6;
	vf[3] = 1;
	vf[4] = 6;
	vf[5] = 5;
	vf[6] = 6;
	vf[7] = 1;
	vf[8] = 6;
	vf[9] = 1;
	vf[10] = 0;

	int multiple = n / 10;

	int s = 0;

	for (int i = 1; i <= 10; i++)
		s += vf[i] * multiple;

	for (int i = 1; i <= n % 10; i++)
		s += vf[i];

	cout << s % 10;

	return 0;
}