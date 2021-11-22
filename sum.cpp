#include <iostream>
using namespace std;

int main() {
    int i= 20, sum = 0;

    cout << "find the sum of the integers: ";
    cin >> i;

    for (int i= 20;i <= 25; ++i) {
        sum += i;
    }

    cout << "Sum = " << sum;
    return 0;
}
