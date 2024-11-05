#include <iostream>
using namespace std;
int main()
{
	int a, b, c, l;
	cout << "输入三边长：" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		l = a + b + c;
		cout << "三角形周长为：" << l << endl;


		if (a == b || a == c || b == c)
			cout << "为等腰三角形" << endl;
		else
			cout << "不是等腰三角形" << endl;
	}
	else 
		cout << "不符合要求" << endl;
	return 0;
}