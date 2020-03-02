#include <iostream>

using namespace std;

int main()
{
    int arr[] = {3,4,8,-9,20,3};
    int left[6],right[6];
    left[0] = arr[0];
    right[5] = arr[5];
    int flag = 0;
    for(int i=1;i<6;i++){
        left[i] = left[i-1] + arr[i];
    }
    for(int i=4;i>=0;i--){
        right[i] = right[i+1]+arr[i];
    }
    for(int i=0;i<6;i++){
        if(left[i]==right[i]){
           flag = 1;
            break;
        }
        //cout<<left[i]<<" "<<right[i]<<endl;
    }
    if(flag)
        cout<<"Yes";
    else cout<<"No";
    return 0;
}
