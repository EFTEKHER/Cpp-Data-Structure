/*
code written by Eftekher Ali Efte from Bangladesh 
 email:eftekherali2000@gmail.com
pursuing computer science and engingeering in Ruet 
*/
#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
#define ull unsigned long long int
#include<ctype.h> 
using namespace std;

 string compressed_string(string str) 
 {
    int n=str.length();
    string output;
    for(int i=0; i<n; i++)
    {
        int count=1;
        while(i<n-1 and str[i+1]==str[i])
        {
            count++;
            i++;

        }
        output+=str[i];
        output+=to_string(count);
    }
    if(output.length()>str.length())
    {
        return str;

    }
    return output;
 }    
        
int main()
{
    string s1="aaaabbbccd";
    cout<<compressed_string(s1)<<endl;
        
return 0;
}
