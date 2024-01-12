#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    float sum = 0.0;

    cout << "Input the value for nth term: ";
   cin >> n;

    for (int i = 1; i <= n; ++i) {
        float term = 1.0 /pow(i, i);
        cout << "1/" << i << "^" << i << " = " << term << endl;
        sum += term;
    }

   cout << "The sum of the above series is: " << sum <<endl;

    return 0;
}
