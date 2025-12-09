#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll an; cin >> an;
    ll sumN = ((1+an)*an)/2;
    ll sumC = 0;
    for (ll i = 0; i < an-1; i++)
    {
        ll curr;
        cin >> curr;
        sumC += curr;
    }

    cout << sumN - sumC;
    
    return 0;
}
