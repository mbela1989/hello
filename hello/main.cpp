#include <iostream>

using namespace std;

int fakt (int a) {
    if ( a<=2)
        return a;
    else
        return a * fakt(a-1);
}

int main()
{
    int a = 0;
    cout << "a = ";
    cin >> a;
    cout << "a! = "<< fakt(a)<< endl;
    return 0;
}
