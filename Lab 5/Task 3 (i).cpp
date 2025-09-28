#include <iostream>
using namespace std;

int sumTail(int n, int total) {
    if (n == 0) {
        return total;
    }
    return sumTail(n - 1, total + n);
}

int main() {
    int n;
    cin >> n;
    cout << sumTail(n, 0);
    return 0;
}
