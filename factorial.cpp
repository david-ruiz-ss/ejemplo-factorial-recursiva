#include <iostream>
using namespace std;
int FuncionFactorial(int n){
 if(n < 0)
  return 0;
 else if(n > 1)
  return n * FuncionFactorial(n-1);
 else
  return 1;
}

int main(){
 int n, factorial;
 cout<<"ingrese un numero"<<"\n";
 cin >> n;
 factorial = FuncionFactorial(n);
 cout << factorial;
 return 0;
}
