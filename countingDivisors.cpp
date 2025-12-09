#include <bits/stdc++.h>

using namespace std;

int main(){
    int contador = 0;
    int n;//variável inteiro
    cin >> n;//recebe informação do usuário
    vector <int> lista;
    for(int i = 1; i < n+1; i++){ //quantidade de repetições  N 1e5
        int b;
        cin >> b;
        lista.push_back(b);
    }
    
   
    for( int a = 0; a < n; a++){ // N 1e5
        int contador = 0;
        for(int i = 1; i <= lista[a];i++){ //Elemento 1e6
            if (lista[a] % i == 0){
                contador++;
            }
        }
        cout << contador << "\n";
    }
    
    
}