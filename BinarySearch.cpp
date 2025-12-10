#include <bits/stdc++.h>

using namespace std;

 int vamosBuscar(int arr[], int c, int f, int numero){ //posição do numero dentro do array

            if( f < c ){
                return -1;
            }
            int m = c + ( f - c )/2; //distancia entre os dois numeros divido por dois mais o inicio para encontrar o meio.
            if (numero < arr[m]){ // elimina todos os numeros depois do "meio".
                return vamosBuscar(arr, c , m-1 , numero);//o valor do começo se mantém porque ele não mudou.
                //é m-1 porque esse vai se o novo final.

            }

            if (arr[m] < numero){ //elimina todos os valores antes do meio
                return vamosBuscar(arr, m + 1, f , numero); //o meio é mais um pois eliminou todos os vaores antes do meio, 
                                                            // incluido o meio e vai avaliar depois do meio.
            }
            return m; // se não for maior e nem menor, esse é o valor que estamos procurando.

        }

int main(){
    int n;
    int q;
    cin >> n >> q;
    int a[n];//Lista de elementos
    for(int i = 0; i < n; i++){//Pegando os elementos do array 1e5
        cin >> a[i];
    }
    for(int i = 0; i < q; i++){//Pegando as querys 10^5
        int busca;
        int numero;
        cin >> numero;
        busca = vamosBuscar(a,0,n,numero);
        if(busca == -1){
            cout << "NO" << '\n';
        }
        else{
            cout << "YES\n";
        }
        
        
    }


    
    



        
    } 
    
