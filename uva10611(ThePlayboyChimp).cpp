#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
  int N, Q,test;
  int luchu[50001];
  scanf("%d", &N);
  for (int i = 0; i < N; i++) {
    scanf("%d", &luchu[i]);
  }
  scanf("%d", &Q);
  while (Q--) {
    int t;
    scanf("%d", &test);
    int low = lower_bound(luchu, luchu + N, test) - luchu - 1;
    int up = upper_bound(luchu, luchu + N, test) - luchu;
    if (low >= 0 && low < N) {
      printf("%d", luchu[low]);
    } else {
      printf("X");
    }
    printf(" ");
    if (up >= 0 && up < N) {
      printf("%d", luchu[up]);
    } else {
      printf("X");
    }
    printf("\n");
  }
  return 0;
}
