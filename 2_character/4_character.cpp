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
      
        
int main()
{
    char ch;
    ch=cin.get();
    //count
    int alpha=0;
    int space=0;
    int digit=0;

    while (ch!='\n')
    {
        if(ch>='0' and ch<='9')
        {
            digit++;
        }
        else if((ch>='a' and ch<='z')or (ch>='A' and ch<='Z'))
        {
            alpha++;
        }
        else if(ch==' ' or ch=='\t')
        {
            space++;
        }
        ch=cin.get();
    }
    
        cout<<"Alpha: "<<alpha<<endl;
        cout<<"Space: "<<space<<endl;
        cout<<"digit"<<digit<<endl;
return 0;
}
