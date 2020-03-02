#include <iostream>

using namespace std;

int jos(int n,int k){
    if(n==1)
        return n;
    int x = (k-1)%n + 1;
    return (jos(n-1,k)+x);
}
int main()
{
    int n=8,k=2;
    cout<<jos(n,k)<<endl;
    return 0;
}
