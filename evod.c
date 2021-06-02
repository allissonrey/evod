
#include <stdio.h>

int main(){
  int s_even = 0; int s_odd = 0;
  
  for (int i = 0; i <= 9; i++){
    printf("%3i", i);
    i % 2 == 0? (s_even += i):(s_odd += i); // cond? 1 : 0
  }
  
  printf("\nEven: %i | Odd: %i\n", s_even, s_odd);

  return 0;
}
