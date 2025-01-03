// code forces - (G) Summation from 1 to N

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    long long N;
    cin >> N;

    long long sum = 0;
    sum = (N * (N + 1)) / 2; 
    
    cout << sum;

    return 0;
}