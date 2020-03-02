#include <iostream>
#include<stdio.h>
using namespace std;

int fact(int n ,int k = 1){
    if(n==1){
        return k;
    }
    return fact(n-1,k*n);
}
int main()
{
    int n = 5;
    cout<<fact(n,1)<<endl;
    return 0;
}
