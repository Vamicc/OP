#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float arg, acc, dist;
    int x, k;
    int n = 0;
    int fact = 1;
    int i = 1;

    cout << "Enter the argument: ";
    cin >> x;
    cout << "Enter accuracy: ";
    cin >> acc;

    float sin = x;

    do {
        arg = sin;
        n += 1;
        k = 2 * n + 1;
        while (i <= k)
        {
            fact *= i;
            i++;
        }
        sin += pow(-1, n) * pow(x, k) / fact;
        dist = abs(sin - arg);
        cout << "arg = " << arg << "\nn = " << n << "\ndist = " << dist << endl;
    } while (dist > acc);

    cout << "sin(x) = " << sin << endl;

    return 0;
}
