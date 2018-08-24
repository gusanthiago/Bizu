# include <bits/stdc++.h>

using namespace std;

vector<int>valores, pesos;

int mochila(int W, int n)
{
  int i, w;
  int K[n+1][W+1];

  for (i = 0; i <= n; i++)
  {
      for (w = 0; w <= W; w++)
      {
          if (i==0 || w==0)
              K[i][w] = 0;
          else if (pesos[i-1] <= w)
                 K[i][w] = max(valores[i-1] + K[i-1][w-pesos[i-1]],  K[i-1][w]);
          else
                 K[i][w] = K[i-1][w];
      }
  }

  return K[n][W];
}

int main() {
    int elementos, max_peso;//, valor_elemento, peso_elemento;
    
    max_peso = 15;
    elementos = 5;
    
    valores.push_back(4);
    pesos.push_back(12);
    valores.push_back(2);// 2
    pesos.push_back(1);// 1
    valores.push_back(10);// 12
    pesos.push_back(4);// 5
    valores.push_back(1); // 13
    pesos.push_back(1);// 6  
    valores.push_back(2); // 15
    pesos.push_back(2); // 8
    
    int maior_valor = mochila(max_peso, elementos);
    cout << maior_valor << endl;
    
    return 0;
}