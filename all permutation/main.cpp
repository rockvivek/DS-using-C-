#include <iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

void allPer(string str,string cur,int index){
    if(index == str.length()){
        printf("%s\n",cur);
        return;
    }
    return allPer(str,cur,index+1);
    return allPer(str,cur+str[index],index+1);
}
int main()
{
    string s = "abc";
    string cur = "";
    allPer(s,cur,0);
    return 0;
}
