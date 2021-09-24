#include "euler.h"
#include <math.h>

int multiple(int n) {
  int i = 0;
  int sum = 0;
  for(i; i< n; i++) {
    if(i % 3 == 0 || i % 5 == 0) {
      sum += i;
    }
  }
  return sum;
}

long prime_factor(long n) {
  long i = 2, max = 1;
  while(n >= 1){
    if(n % i != 0) {
      i++;
    } else {
      max = n;
      n /= i;
      if(n == 1) {
        return max;
      }
    }
  }
  return 0;
}