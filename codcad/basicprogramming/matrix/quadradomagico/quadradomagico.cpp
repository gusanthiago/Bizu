#include <cstdio>
#include <unordered_set>

using namespace std;

const int maxn = 128;
int matrix[maxn][maxn];

bool isMagicSquare(int sum, int n) {

  //unordered_set numbers;
  int sumFirstDiagonal = 0, sumSecondDiagonal = 0, sumLine = 0, sumColumn = 0;  

  for (int i=0; i < n; i++) {
    sumFirstDiagonal += matrix[i][i];
    sumSecondDiagonal += matrix[i][n-(1+i)];
    for (int j=0; j < n; j++) {
      //if (! numbers.insert(matrix[i][j]).second) 
        //return false;
      sumLine += matrix[i][j];
      sumColumn += matrix[j][i];
    }
    if (sumLine != sum || sumColumn != sum) {
      return false;
    }
    sumLine = 0;
    sumColumn = 0;
  }
  
  return (sumFirstDiagonal == sum && sumSecondDiagonal == sum) ? true : false;
}

int main() {

  int n, sumInitial = 0;
  scanf(" %d", &n);
  for (int i=0; i < n; i++) {
    for (int j=0; j < n; j++) {
      scanf(" %d", &matrix[i][j]);
      if (i == 0) sumInitial += matrix[i][j];
    }
  } 
  
  printf("%d\n", isMagicSquare(sumInitial, n) ? sumInitial : -1);

  return 0;
}

