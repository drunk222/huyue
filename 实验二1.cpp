#include <iostream>
using namespace std;
int main() {
    char m;
    cout << "ÇëÊäÈëÒ»¸ö×Ö·û: ";
    cin >> m;
   if (m >= 'a' && m <= 'z')
   {
        char n= m - ('a' - 'A');
        cout << "´óÐ´×Ö·û: " << n << endl;
    }
    else 
   {
        int o = static_cast<int>(m) + 1;
        cout << "ºó¼Ì×Ö·ûµÄASCIIÂëÖµ: " << o << endl;
    }

    return 0;
}
