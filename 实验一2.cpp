#include <iostream>
using namespace std;
int main()
{
	const float pi = 3.1416;
	float r,h,V;
	cout << "请输入圆锥的底面圆的半径：" << endl;
	cin >> r;
	cout << "请输入圆锥的高：" << endl;
	cin >> h;
	V = (pi * r * r * h) / 3;
	cout << "圆锥的体积为" << V;
	return 0;
}