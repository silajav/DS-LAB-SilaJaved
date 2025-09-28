#include <iostream>
using namespace std;

int sumNonTail(int n) {
    if (n == 0) {
        return 0;
    }
    return n + sumNonTail(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << sumNonTail(n);
    return 0;
}
