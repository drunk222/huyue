#include <iostream>
using namespace std;
int main() {
    char m;
    cout << "������һ���ַ�: ";
    cin >> m;
   if (m >= 'a' && m <= 'z')
   {
        char n= m - ('a' - 'A');
        cout << "��д�ַ�: " << n << endl;
    }
    else 
   {
        int o = static_cast<int>(m) + 1;
        cout << "����ַ���ASCII��ֵ: " << o << endl;
    }

    return 0;
}
