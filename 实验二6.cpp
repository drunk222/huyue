#include <iostream>
using namespace std;
int yue(int x, int y)
{
	int yin;
	for (int i = 1; i <= x; i++) 
	{
		if (x % i == 0 && y % i == 0)
			yin = i;
	}
	return yin;


}
int bei(int x, int y)
{
	return (x * y) / yue(x, y);
}

int main()
{
	int a, b;
	cout << "����������" << endl;
	cin >> a;
	cin >> b;
	cout << "���Լ��" << yue(a,b) << endl;
	cout << "��С������" << bei(a,b) << endl;
	return 0;
}