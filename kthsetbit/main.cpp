#include<stdio.h>
#include<iostream>

using namespace std;
int main()
{
  int n, c, k;

  printf("Enter an integer in decimal number system\n");
  scanf("%d", &n);

  printf("%d in binary number system is:\n", n);

  for (c = 3; c >= 0; c--)
  {
    k = n >> c;

   cout<<k<<endl;
  }

  printf("\n");

  return 0;
}
