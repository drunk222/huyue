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
	cout << "输入两个数" << endl;
	cin >> a;
	cin >> b;
	cout << "最大公约数" << yue(a,b) << endl;
	cout << "最小公倍数" << bei(a,b) << endl;
	return 0;
}