#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n,counter;
    cin >> n;
    counter = 0;
    if (n % 5 != 0)
        n -= n%5;
    while (n >= 5)
    {
        ll valor = n;
        while (valor % 5 == 0)
        {
            valor /= 5;
            counter++;
        }
        n -= 5;
        
    }
    cout << counter << "\n";    
    return 0;
}