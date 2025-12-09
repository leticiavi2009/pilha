#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int r,c;
    cin >> r >> c;
    char matriz[r][c];
    char answ[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> matriz[i][j];
            answ[i][j] = matriz[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (matriz[i][j] != '.' && matriz[i][j] != '#'){
                for (int l = 0; l < r; l++)
                {
                    for (int k = 0; k < c; k++)
                    {
                        if (abs(i - l) + abs(j - k) <= matriz[i][j] - '0')
                        {
                            answ[l][k] = '.';
                        }
                    }
                    
                }
                

            }
        }
        
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << answ[i][j];
        }
        cout << "\n";
    }
    
    
      
    return 0;
}