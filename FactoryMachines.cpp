#include <bits/stdc++.h>

using namespace std;
/*Como funciona a resolução do código? Bom, ele quer que a gente pegue justamente o menor 
tempo que faça t produtos em n máquinas. A gente vai precisar usar a busca binária que vai 
pegar justamente o menor tempo que consegue realizar a quantidade de máquinas determinada 
pelo usuário. Vamos ver o exemplo qeu foi dado no site: 3 e 7, ai vao ter 3 máquinas que 
vai ser dado como entrada quanto tempo cada uma demora para fabricar um produto. Que no caso
são, 3, 2 e 5. A gente coloca como tempo máximo 20 segundos, e o minimo 0 segundos. Dividimos por 2
e vai ser 10 vemos a quantidade de produtos que pode ser feito em 10 segundos. Dividimos 10 por 3,2 e 5 
e sua soma da a quantidade de produtos produzidos pelas máquinas. Beleza, não vai ser 10, apagamos todos 
os numeros que vem depois de 10 pq a quantidade de maquinas produzidas em 10 segundos vai ser bem maior 
que 7. Fazemos esse processo até achar 8 segundos que dá exatamente 7 produtos.
*/

//vou passar todos os valores para dentro da função
// 



int f(int s,vector<int>b){/*essa função retorna para um valor de m, quantos produtos as máquinas 
                           conseguem fazer em n segundos. */

    for(i = 0; i < n; i++){ //seria i menor que n porque seria a quantidade de máquinas.
        int soma = a(i)/ s ;
        

    }
}

int buscaBinaria(vector<int>a, int i, int f,int t){
    //esses nomes não precisam ser os mesmos que os de fora

        int m = i + (f - i)/2;

        if (f(m) < t){
            
            return buscaBinaria(arr, m + 1, i, t);

        }
        if (f(m) > t) {
            return buscaBinaria(arr, f, m - 1, t);

        }
        
    }

int main(){
    int n;
    int t;
    vector<int>a(n);
    cin >> n >> t;
    for (int i = 0; i < n; i++){
        cin >>a(i);
        buscaBinaria(a, 0, 1e18 , t);//
        
    }

    /*a diferença entre o vetor e o array é que o array guarda os elementos em ordem e é sempre a mesma quantidade já o vector, 
    vc pode adicionar o elemento do final, é mais maleável.*/


}