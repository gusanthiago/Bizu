#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> pilha; // declaração

    pilha.push(10); // Adiciona um elemento na pilha

    pilha.empty(); // Retorna boolean para pilha vazia

    pilha.pop(); // Remove elemento do topo da pilha

    return 0;
}
