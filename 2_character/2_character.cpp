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
    char sentetence [1000];
    char temp=cin.get();
    int len=1;
    while(temp !='\n')
    {
        len++;
        cout<<temp;
        temp=cin.get();
    }
cout<<endl;

    cout<<"Length :"<<len<<endl;

return 0;
}
