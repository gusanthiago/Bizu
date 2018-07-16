#include <iostream>

using namespace std;

string parserTelefone(string telefone) 
{
  for (int i=0, total = telefone.size(); i < total; i++) {
    if (isdigit(telefone[i]) || telefone[i] == '-') continue;
    telefone[i] = tolower(telefone[i]);
    if (telefone[i] >= 'a' && telefone[i] <= 'c') telefone[i] = '2';
    else if (telefone[i] >= 'd' && telefone[i] <= 'f') telefone[i] = '3';
    else if (telefone[i] >= 'g' && telefone[i] <= 'i') telefone[i] = '4';
    else if (telefone[i] >= 'j' && telefone[i] <= 'l') telefone[i] = '5';
    else if (telefone[i] >= 'm' && telefone[i] <= 'o') telefone[i] = '6';
    else if (telefone[i] >= 'p' && telefone[i] <= 's') telefone[i] = '7';
    else if (telefone[i] >= 't' && telefone[i] <= 'v') telefone[i] = '8';
    else if (telefone[i] >= 'w' && telefone[i] <= 'z') telefone[i] = '9';

  }

  return telefone;
}

int main() {
  
  string line;
  getline(cin, line);
  cout << parserTelefone(line) << endl;


  return 0;
}
