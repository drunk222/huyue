#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a, x, xnext;
	cout << "输入一个数字" << endl;
	cin >> a;
	if (a < 0)
	{
		cout << "输入的数字不能求取其平方根" << endl;
		return 1;
	}
	else if (a == 0)
	{
		cout << "0" << endl;
		return 0;
	}

	x = a;
	do
	{
		xnext = 0.5 * (x + a / x);
		if (fabs(xnext - x) < (10e-5))
		{
			break;
		}
		x = xnext;
	} while (true);
	cout << "a的平方根为：" << xnext<<endl;

	return 0;
}