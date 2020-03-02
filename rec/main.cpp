#include <iostream>

using namespace std;

int printNo(int n){
    if(n==0) return 0;
    cout<<printNo(n-1)<<" ";
}
int main()
{
//    cout << "Hello world!" << endl;
    int n;
    cin>>n;
    printNo(n);
    return 0;
}
