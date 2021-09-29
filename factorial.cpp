//Joshua Realubit
//netID - jrealu3
#include "https://github.com/sercantutar/infint/blob/master/InfInt.h"

long factorial (int n){
  long result = 1;
  while(n > 1){
    result *= n--;
  }
  return result;
}

int main(){
  std::cout << factorial(100);
}
