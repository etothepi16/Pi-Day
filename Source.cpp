#include <iostream>
#include <numeric>
#include <cmath>
#include <cstdlib>
using namespace std;

int gcd(int a, int b)
{
	int c;
	while (a != 0) {
		c = a; a = b%a;  b = c;
	}
	return b;
}

int main() {
	int rand1, rand2;
	int range = 1000000;
	int count = 0;
	long double percent = 0;
	for (int i = 0; i < 10000; i++)
	{
		rand1 = floor((double)rand() / RAND_MAX*range);
		rand2 = floor((double)rand() / RAND_MAX*range);
		cout << "Randomly chose " << rand1 << " and " << rand2 << endl;
		if (gcd(rand1, rand2) == 1) {
			count++;
		}
		percent = ((long double)count / 10000);
		cout << "Current percentage of coprimes is: " << (percent*100) << endl;
	}

	long double result = sqrtl(6.000000 / percent);
	cout << "Pi has been experimentally calculated to be: " << result << endl;
	return 0;
}