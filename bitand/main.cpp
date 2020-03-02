#include <iostream>

using namespace std;

int main()
{
    int n = 5;
    int k = 1;
    if(n && n&(1<<k-1))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}
