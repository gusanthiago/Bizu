#include<iostream>
using namespace std;

int main()
{
    map<string, int> m; // declaração, mapeia string em int

    m.insert(make_pair("Alana", 10)); // Insere uma variável do tipo pair no map
    m["Alana"] = 10; // Relaciona o valor 10 a chave Alana

    m.find("Alana"); // Procura pela chave Alana, se não achar, aponta pro final do map
    cout << m["Alana"]; // Printa o valor associado a chave Alana, ou seja, 10

    m.erase("Alana"); // Deleta o elemento que possui a chave Alana do map

    m.size(); // Pega o tamanho do map

    m.begin(); // Aponta pro inicio do map

    m.end(); // Aponta pro final do map

    m.clear(); // Apaga todos os elementos do map

    return 0;
}
