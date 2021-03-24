
#include <iostream>

using namespace std;

int main()
{
    int p = 10;
    int* p2 = new int;
    p2 = &p;
    delete p2;  //lỗi corruption k in ra giá trị p
    cout << p;
    return 0;
}