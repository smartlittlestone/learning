#include "common_header.h"

int main()
{
    string str1 = "hello";
    string str2 = " world";
    string str = move(str1) + move(str2);
    cout << str << endl;
    cout << str1 << endl;
    cout << str2 << endl;
    return 0;
}
