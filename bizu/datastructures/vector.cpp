#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int> v; //declaração

    v.push_back(10);  v.push_back(7); v.push_back(21); // Adiciona valores no final do vector

    for(int i = 0; i < v.size(); ++i) //Percorre todo o tamanho do vector
        cout << v[i] << endl; // Printa todos os valores do vector

    v.resize(10); //Modifica o tamanho do vector para 10 elementos, adiciona os demais valores com 0

    v.pop_back(); //Deleta o último elemento do vector

    sort(v.begin(), v.end()); // Ordena o vector em ordem crescente

    v.clear(); // Remove todos os elementos do vector

    return 0;
}
