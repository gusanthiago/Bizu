#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    pair<string, int> p; //declaração

    cin >> p.first >> p.second; /*Lê um valor do tipo string e armazena na primeira posição, entao lê um valor do tipo int e lê na
                                segunda posição do pair*/

    pair<int, string> a;
    pair<int, string> b;
    a.first = 10;
    a.second = "Joao";
    b.first = 5;
    b.second = "Ana";

    if(a > b) cout << a.second << " eh melhor" << endl; //Realizando comparações em um pair
    else cout << b.second << " eh melhor" << endl;

    vector< pair<int, string> > v;
    pair<int, string> tmp;

    for(int i = 1; i < 10; ++i){
        cin >> tmp.first >> tmp.second; //Lê valores pra armazenar no pair temporario
        v.push_back(tmp); // Adiciona o pair no vetor do tipo pair
    }

    sort(v.begin(), v.end()); /*Ordena vector utilizando comparador do pair(compara pelo first e em caso de empate, compara pelo
                                second*/

    v.clear();

    int a;
    string b;

    for(int i = 1; i < 10; ++i){
        cin >> a >> b;
        v.push_back(make_pair(a, b)); //Cria um pair com make_pair do tipo <int, string> e adiciona no vector
    }

    return 0;
}
