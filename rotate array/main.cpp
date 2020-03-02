#include <iostream>

using namespace std;

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int* rev(int arr[],int start,int end){
    for(int i=start,j=end;i<=j;i++,j--){
        swap(&arr[i],&arr[j]);
    }
    return arr;
}

int* rotateArray(int arr[],int size,int d){
        arr = rev(arr,0,d-1);
        arr = rev(arr,d,size-1);
        arr = rev(arr,0,size-1);
        return arr;
}
int main()
{
    int arr[] = {1,2,3,4,5};
    int *a = rotateArray(arr,5,2);
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
