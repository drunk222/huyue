#include <iostream>
using namespace std;
int main()
{
	int a = 2, sum = 2,i=1;
	float money;
	while(a*2<= 100)
	{
		a = a * 2;
		i++;
		sum = sum + a;
	}
	money = (sum * 0.8)/i ;
	cout<<"ÿ��ƽ����"<<money<<"Ԫ";
	return 0;
}