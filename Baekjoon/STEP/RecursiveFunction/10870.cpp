#include <iostream>
using namespace std;

int Fibo(int n)
{
  if(n>2) return Fibo(n-1) + Fibo(n-2);
  else if (n==0) return 0;
  else return 1;
}

int main()
{
  int n;
  cin >> n;
  cout << Fibo(n);
}
