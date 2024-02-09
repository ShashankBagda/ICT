#include <iostream>
#include <cmath>
using namespace std;
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}
int karatsuba(int x, int y) {
    if (x < 10 || y < 10) {
        return x * y;
    }
    int n = max(countDigits(x), countDigits(y));
    int m = (n / 2) + (n % 2);
    int high1 = x / pow(10, m);
    int low1 = x % int(pow(10, m));
    int high2 = y / pow(10, m);
    int low2 = y % int(pow(10, m));
    int z0 = karatsuba(low1, low2);
    int z1 = karatsuba((low1 + high1), (low2 + high2));
    int z2 = karatsuba(high1, high2);
    return z2 * int(pow(10, 2 * m)) + ((z1 - z2 - z0) * int(pow(10, m))) + z0;
}
int main() {
    int x = 2323;
    int y = 3232;
    int result = karatsuba(x, y);
    cout << "Result of " << x << " * " << y << " using Karatsuba algorithm: " << result << endl;
    return 0;
}
