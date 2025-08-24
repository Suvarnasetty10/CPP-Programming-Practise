#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;

    while (t--) {
        int A, B, X, Y;
        cin >> A >> B >> X >> Y;

        int d = B - A;

        if (d <= X && -d <= Y) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
