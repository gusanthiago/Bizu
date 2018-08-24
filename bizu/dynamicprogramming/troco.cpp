# include <bits/stdc++.h>
# define INF 1 << 30

using namespace std;
 
int pega_minimo_moedas(int troco, int moedas[], int numero_moedas) {
    int pd[troco + 1], moeda;
    pd[0] = 0;
    for(int valor = 1; valor <= troco; valor++) {
        pd[valor] = INF;
        for(int i = 0; i < numero_moedas; i++) {
            moeda = moedas[i];
            if(valor >= moeda && 1 + pd[valor - moeda] < pd[valor] ) {
                pd[valor] = 1 + pd[valor - moeda];
            }
        }
    }
    return pd[troco];
}
 
int main()
{
    int t;
    
    int moedas[] = {1, 1, 2, 2, 3, 4, 5, 10, 5};
    int troco = 15;
    int numero_moedas = 9;
        
    int minimo_moedas = pega_minimo_moedas(troco, moedas, numero_moedas);
    
    // para 15 o menor número de moedas é 2 (10, 5)
    cout << minimo_moedas << endl;
    
    return 0;
}