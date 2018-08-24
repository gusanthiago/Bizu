#include<iostream>
#include<set>
using namespace std;

int main()
{
    // c++ 14 unordered_set<int>
    set<int> s; // declaração

    s.insert(10); // Adiciona elemento no set
    s.insert(3); // Set não adiciona elementos repetidos
    // Set adiciona elementos de forma ordenada

    s.find(3); // Busca um valor no set, se não achar o valor, aponta pro final do set

    s.erase(10); // Deleta um elemento do set

    s.size(); // Pega o tamanho do set

    s.begin(); // Aponta pro começo do set

    s.end(); // Aponta pro final do set

    s.clear(); // Apaga todo o set

    return 0;
}
