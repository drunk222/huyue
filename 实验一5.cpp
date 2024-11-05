#include <iostream>
using namespace std;
int main()
{
	float hua, she;
	cout << "输入华氏温度" << endl;
	cin >> hua;
	she = (hua - 32) / 1.8;
	cout << "摄氏温度为：" <<she<< endl;
	return 0;

}