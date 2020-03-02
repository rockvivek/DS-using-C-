#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int arr[] = {1,2,3,4,5,6};
    int x1 = 2;
    int x2 = 4;

    int sum = 0;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        arr[i] = arr[i-1] + arr[i];
    }
    cout<<arr[x2]-arr[x1-1];
    return 0;
}
