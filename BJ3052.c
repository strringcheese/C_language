#include <stdio.h>

int main() {
  int num[42] = {0};
  int cnt = 0;
  
  for(int i = 0; i < 10; ++i) {
    int sum; scanf("%d",&sum);
    if(num[sum%42] ==0) {
      cnt += 1; num[sum%42] = 1;
    }
  }

  printf("%d",cnt);
  return 0;
}
