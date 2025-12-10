#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int factorial int(x){
        if(x == 0) return 1;
        return factorial (x - 1)* x;
    }

    int fibonacci(int x){
        if(x <= 1) return x;
        return fibonacci(x - 1) + fibonacci(x - 2);
    }
}