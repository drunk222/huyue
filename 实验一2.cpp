#include <iostream>
using namespace std;
int main()
{
	const float pi = 3.1416;
	float r,h,V;
	cout << "������Բ׶�ĵ���Բ�İ뾶��" << endl;
	cin >> r;
	cout << "������Բ׶�ĸߣ�" << endl;
	cin >> h;
	V = (pi * r * r * h) / 3;
	cout << "Բ׶�����Ϊ" << V;
	return 0;
}