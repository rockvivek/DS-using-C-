#include <iostream>
#include<string.h>

using namespace std;

char first(string str,int length){
    int res = INT_MAX;
    int count[256] = {-1};
    for(int i=0;i<length;i++){
        if(count[str[i]]==-1){
            count[str[i]]++;
        }
        else{
            res =res<count[str[i]]?res:count[str[i]];
        }
    }
    return str[res];
}
int main()
{
    string str = "geeksforgeeks";
    cout<<first(str,str.length());
    return 0;
}
