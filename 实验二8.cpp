#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a, x, xnext;
	cout << "����һ������" << endl;
	cin >> a;
	if (a < 0)
	{
		cout << "��������ֲ�����ȡ��ƽ����" << endl;
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
	cout << "a��ƽ����Ϊ��" << xnext<<endl;

	return 0;
}