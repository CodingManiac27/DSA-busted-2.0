#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;  // Read the number of test cases

    while (t--) {
        int a, b;
        cin >> a >> b;  // Read the two integers for the current test case
        cout << a + b << endl;  // Output the sum of a and b
    }

    return 0;
}
