#include<iostream>
using namespace std;
int main()
{
	int zm = 0, sz = 0, kg = 0, qt = 0;
	char a;
	cout << "输入一行字符" << endl;
	while ((a = cin.get() )!= '\n')
	{
		if (a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z')
			zm++;
		else if (a >= '0' && a <= '9')
			sz++;
		else if (a == ' ')
			kg++;
		else
			qt++;
	}
	cout << "字母个数" << zm << endl;
	cout << "数字个数" << sz << endl;
	cout << "空格个数" << kg << endl;
	cout << "其他个数" << qt << endl;
	return 0;
}