#include <iostream>
using namespace std;
int main()
{
	int a, b, c, l;
	cout << "�������߳���" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		l = a + b + c;
		cout << "�������ܳ�Ϊ��" << l << endl;


		if (a == b || a == c || b == c)
			cout << "Ϊ����������" << endl;
		else
			cout << "���ǵ���������" << endl;
	}
	else 
		cout << "������Ҫ��" << endl;
	return 0;
}