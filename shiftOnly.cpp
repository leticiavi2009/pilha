#include <bits/stdc++.h>

using namespace std;

int main(){
    //1-colocar a quantidade de numeros que vai ser avaliado
    int t;
    cin >> t;
    vector<int> lista;
    for(int i = 0; i < t; i++){ 200
        int a; cin >> a;
        lista.push_back(a);
    }

    //Quantas operações
    int resposta = 0; //Contador 1
    bool verificador = true;
    while(verificador){ 30
        //Verifcar se consigo fazer 1 operação
        int contador = 0;
        for(int i = 0; i < t; i++ ){ // t <= 200
            // mesma coisa que lista /= 2;
            if (lista[i]%2 == 0){
                lista[i] = lista[i] / 2;
                contador++;
            }
        }
        if(contador != t) verificador  = false;//Não consegue fazer a operação, logo parar de processar
        else resposta++;//Conseguiu fazer uma operação    
    }
    cout << resposta;
}