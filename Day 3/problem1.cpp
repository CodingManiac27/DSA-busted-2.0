//codeforces - (G) factorial

#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;

    while(T--){

        int N;
        cin >> N;

        long long factorial = 1;

        for(int i = 1; i<=N; i++){
            factorial *= i;
        }

        cout << factorial << endl;

    }

    return 0;
}