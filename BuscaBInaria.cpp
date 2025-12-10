#include <bits/stdc++.h>

using namespace std;

int main(){
    int buscaBinaria(int arr[], int e,int d,int x){
        int m = e + (d - e)/2 ;
        if (arr(m) < x){
            return buscaBinaria(arr, m +1, d, x);

        }
        if (arr[m] > x) {
            return buscaBinaria(arr, e, m - 1);

        }
        return m;
    }
}