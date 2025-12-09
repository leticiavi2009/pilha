#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ios::sync_with_stdio(0); cin.tie(nullptr);
    int t ;
    cin >> t;
    int a[t];
    int b[t];
    bool answ[t];
    for (int i = 0; i < t; i++)
    {
        cin >> a[i] >> b[i];
        int maior = max(a[i],b[i]);
        int menor = min(a[i],b[i]);
        if (maior >  2*menor || (maior + menor) % 3 != 0){
            answ[i] = false;
        } else{
            answ[i] = true;
        }

    }

    for (int i = 0; i < t; i++)
    {
        //answ[i] ? cout << "YES\n" : cout << "NO\n";
        if (answ[i])
            cout << "YES\n";
        else 
            cout << "NO\n";
    }
    
    
    return 0;
}