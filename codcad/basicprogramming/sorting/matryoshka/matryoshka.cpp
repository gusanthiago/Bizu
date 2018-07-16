#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;


int main() {

  vector<int> normal, compare, arrayDiff;
  int n, tmp, cont = 0;

  scanf("%d", &n);
  for (int i=0; i < n; i++) {
    scanf("%d", &tmp);
    normal.push_back(tmp);
    compare.push_back(tmp);
  }
  sort(compare.begin(), compare.end());
  for (int i=0; i < n; i++) {
    if (normal[i] != compare[i]) {
      cont++;
      arrayDiff.push_back(compare[i]);
    }
  }
  sort(arrayDiff.begin(), arrayDiff.end());

  printf("%d\n", cont);
  for (int i=0; i < cont; i++) {
    printf("%d", arrayDiff[i]);
    if (cont - i != 1) printf(" ");
  }


  return 0;
}
