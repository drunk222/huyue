#include<iostream>
using namespace std;
int main()
{
	int zm = 0, sz = 0, kg = 0, qt = 0;
	char a;
	cout << "����һ���ַ�" << endl;
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
	cout << "��ĸ����" << zm << endl;
	cout << "���ָ���" << sz << endl;
	cout << "�ո����" << kg << endl;
	cout << "��������" << qt << endl;
	return 0;
}