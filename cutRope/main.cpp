#include <iostream>

using namespace std;
int max(int a,int b,int c){
     if(a == b == c)
        return c;
     if(a==b && (b>c))
        return b;
     if(a==b && b<c)
        return c;
     if(b==c && b>a)
        return b;
     if(b==c && b<a)
        return a;
     if(a==c && a>c)
        return a;
     if(a==c && a<c)
        return c;
     if(a>b){
        if(a>c)
            return a;
        else
            return c;
     }
     else{
        if(b>c)
            return b;
        else
            return c;
     }
}

int cutRope(int n,int a,int b,int c){
    if(n==-1)
        return -1;
    if( n == 0)
        return 0;
    int res =  max( cutRope(n-a,a,b,c) , cutRope(n-b,a,b,c) , cutRope(n-c,a,b,c) );
    if(res == -1)
        return -1;
    return (res+1);
}
int main()
{
    int n=5,a=2,b=5,c=1;
    //cin>>n>>a>>b>>c;
    cout<<cutRope(n,a,b,c);
    return 0;
}
