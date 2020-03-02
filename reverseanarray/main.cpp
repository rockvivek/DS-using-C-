#include <iostream>
#include<stack>
#include<queue>

using namespace std;
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
//simple reverse using loop
int* rev(int arr[],int start,int end){
    for(int i=start,j=end;i<=j;i++,j--){
        swap(&arr[i],&arr[j]);
    }
    return arr;
}
//reverse usig the stack functions
void stackRev(int arr[],int start,int end){
    stack<int> s;
    for(int i=start;i<=end;i++){
        s.push(arr[i]);
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}

//reverse using recursion function
void reverseUsingRecursion(int arr[],int n){
    if(n==0)
        return;
    else{
        cout<<arr[n-1]<<" ";
        return reverseUsingRecursion(arr,n-1);
    }
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    //int *a = rev(arr,0,4);

    //for(int i=0;i<=4;i++){
      //  cout<<a[i]<<" ";
    //}
    stackRev(arr,0,4);
    cout<<endl;
    reverseUsingRecursion(arr,5);
    //queueRev(arr,0,4);
    cout<<endl;
    return 0;
}
