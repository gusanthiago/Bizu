#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> fila; // declara��o

    fila.push(5); //Adiciona na fila

    fila.empty(); // Verifica se a fila est� vazia, retorna um boolean

    fila.pop(); //Deleta o primeiro elemento da fila

    int p = fila.front(); // Coloca o primeiro elemento da fila na vari�vel p

    return 0;
}
