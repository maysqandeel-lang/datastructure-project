#include <iostream>
using namespace std;

long long fib(long long n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}
int main() {
    long long x;
    cout << "enter number: ";
    cin >> x;

    cout << "the value is: " << fib(x) << endl;
    return 0;
}