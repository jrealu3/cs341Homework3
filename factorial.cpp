//Joshua Realubit
//netID - jrealu3
//#include "InfInt.h"

long fact (int n){
  long result = 1;
  while(n > 1){
    result *= n--;
  }
  return result;
}

int main(){
  std::cout << fact(100);
}
