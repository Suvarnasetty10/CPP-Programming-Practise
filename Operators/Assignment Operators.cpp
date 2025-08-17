#include <iostream>
using namespace std;
//Assignment Operators
int main() {
    int a = 6, b = 4;

    cout << "a = " << a << endl;
    cout << "a += b is " << (a += b) << endl;
    cout << "a -= b is " << (a -= b) << endl;
    cout << "a *= b is " << (a *= b) << endl;
    cout << "a /= b is " << (a /= b);
    return 0;
}
Output:
a = 6
a += b is 10
a -= b is 6
a *= b is 24
a /= b is 6
