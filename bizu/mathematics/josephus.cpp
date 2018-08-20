#include <bits/stdc++.h>

using namespace std;

// http://www.geeksforgeeks.org/josephus-problem-set-1-a-on-solution/

// soluçao a base de recorrencia
int josephus(int n, int k)
{
  if (n == 1)
    return 1;
  else
    return (josephus(n - 1, k) + k-1) % n + 1;
}

int main(){
  int pessoas_na_roda = 40;
  int intervalo_para_matar = 3
  int ultimo_na_mesa = josephus(pessoas_na_roda, intervalo_para_matar);
  printf("josephus é o %d \n", ultimo_na_mesa);

  return 0;
}
