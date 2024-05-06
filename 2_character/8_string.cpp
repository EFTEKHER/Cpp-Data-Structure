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
    string s;
    int n=5;

    vector<string> sarr;
    string temp;

    while(n--)
    {
        getline(cin,temp);
        sarr.push_back(temp);
    }
    for(string x:sarr)
    {
        cout << x << endl;
    }
        
return 0;
}
