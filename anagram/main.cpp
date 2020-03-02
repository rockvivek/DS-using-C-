#include <iostream>
#include<tr1/unordered_map>
#include<string.h>

using namespace std::tr1;
using namespace std;

int anagram(string str1,int len1,string str2,int len2){
   unordered_map<char,int> um1,um2;

    if(len1!=len2)
        return 0;
    for(int i=0;i<len1;i++){

       if(i=um1.find(str1[i])!=um1.end())
            um1[str1[i]]++;
        else
            um1[str1[i]] = 1;


         if(i=um2.find(str2[i])!=um2.end())
            um2[str2[i]]++;
        else
            um2[str2[i]] = 1;
    }

    sampl.key_eq()(100, 200);
}
int main()
{
        string str1 = "rahimramisgood";
        string str2 = "ramrahimgoodis";
        if(anagram(str1,str1.length(),str2,str2.length())){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }

    return 0;
}

