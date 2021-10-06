#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, A, B, y;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		A = x * x * +1;
		if (x<4)
		{
			B = (4 * (x * x * x * x * x * x * x) - (x * x * x * x * x) + (x * x * x) - 2);
		}
		else
			if (4<=x && x<3)
			{
				B = (atan((abs(x) + 1) / 2) + 8.3 * x);
			}
			else
				{
					B = log(abs(2 * x + exp(4 * x + 1)));
				}
		y = A + B;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
		cout << "---------------------------" << endl;
	}
	return 0;
}