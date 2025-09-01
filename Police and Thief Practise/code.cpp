#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int X, Y;
        cin >> X >> Y;
        int distance = abs(X - Y);
        int time = distance;
        cout << time << endl;
    }
    return 0;
}
