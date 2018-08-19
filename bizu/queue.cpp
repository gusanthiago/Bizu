#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> fila; // declaração

    fila.push(5); //Adiciona na fila

    fila.empty(); // Verifica se a fila está vazia, retorna um boolean

    fila.pop(); //Deleta o primeiro elemento da fila

    int p = fila.front(); // Coloca o primeiro elemento da fila na variável p

    return 0;
}
