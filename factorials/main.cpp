#include <iostream>

using namespace std;

//factorials of a large no......
int multiply(int arr[],int res_size,int x){
    int carry = 0;
    int i = 0;
    while(i!=res_size){
        int prod = arr[i]*x + carry;
        carry = prod/10;
        arr[i] = prod%10;
        i++;
    }
    while(carry){
        arr[res_size] = carry%10;
        carry/=10;
        res_size++;
    }
    return res_size;
}
void factorial(int n){
    int ar[500];
    ar[0] = 1;
    int res_size = 1;
    for(int i=2;i<=n;i++){
        res_size = multiply(ar,res_size,i);
    }
    for(int i=res_size-1;i>=0;i--){
        cout<<ar[i];
    }
    cout<<endl;
}

int main()
{
    factorial(100);

    return 0;
}
