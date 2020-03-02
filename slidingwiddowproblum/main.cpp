#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1,2,3,1,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = arr[0]+arr[1]+arr[2];
    int max = sum;
    for(int i=2;i<n-1;i++){
        sum = sum + arr[i+1]-arr[i-2];
        if(max<sum){
            max = sum;
        }
    }
    cout<<max;
    return 0;
}
