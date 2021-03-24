#include <iostream>

using namespace std;

int main()
{
    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p;
    *p2 = 100;
    cout << *p2; //p2 không được cấp phát động mà được giải phóng
    delete p2;
    return 0;
}