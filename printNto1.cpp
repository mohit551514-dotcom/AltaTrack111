
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n >= 1) {
        cout << n;

        if (n > 1) {
            cout << " ";
        }

        n--;
    }

    return 0;
}
