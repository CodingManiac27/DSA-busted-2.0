//Code forces - (J) Multiples

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int X, Y;
    cin >> X >> Y;
    
    if(X % Y == 0 || Y % X == 0) 
        cout << "Multiples";
    else 
        cout << "No Multiples";
    
    return 0;
}