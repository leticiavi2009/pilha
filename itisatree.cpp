#include <bits/stdc++.h>

using namespace std;
//conexo possui somente uma componente conexa.
//aresta é nós menos 1
//criar vetor de visita

/*declara as variáveis globalmente porque se utiliza nas duas funções*/


int verifica;
int nos , arestas;
vector < vector <int>>adjacencias; //lista de adjacencias
vector<int> vis;//vetor de visitação
   
void dfs(int u){ //retorno void, não tem retorno.
    vis[u] = 1;

    for(int v : adjacencias[u]){ 
        if (vis[v] == 0) dfs(v); 
    /* os dois pontos pega o i e percorre cada elemento 
    dentro do vetor e daí se caso esse elementod o vetor foi visitado ele passa a ser de 0*/
    } 
    
}

int main(){
    
    cin >> nos >> arestas;
    adjacencias.resize(nos);//assign determina o espaço que terá o vetor.
    vis.resize(nos);
    /*DIFERENÇA ENTRE DFS E BFS
    BFS é melhor para ver por camadas e o tamanho menor,
    já a DFS é mais geralzona, nesse caso seria mais útil a DFS porque a gente vai conseguir 
    ver se foi visitado ou não o vértice.*/

    for(int i = 0; i < arestas ; i++){
        int u, v;
        cin >> u  >> v;
        u--; /*voltar para posição incial do vetor*/
        v--;
        adjacencias[u].push_back(v);
        adjacencias[v].push_back(u);//precisa fazer os dois pq da para ir para os dois lados


        //estou adicionando u e v na minha lista, o u primeiro e o v por último.
        //matriz gurda informações inúteis, lista guarda informações necessárias nesse caso.
   }
    if(nos - 1 != arestas){
            cout << "NO\n"; 
            return 0;
        }
    dfs(0);
    for(int x : vis){
        if(x == 0){
            cout << "NO\n"; 
            return 0;

        }
        
    }
    cout << "YES\n";
    //poderia deixar o Yes fora do for como uma opçaõ tmb
}
