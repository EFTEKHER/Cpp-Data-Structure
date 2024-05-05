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
  string x,y,z,d;
  cin>>x>>y>>z;
  d=x+y;
 if(z.length()==d.length())
 {
   sort(z.begin() , z.end());
   sort( d.begin(),d.end());
    if(z==d)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
 }
 else{
    cout<<"NO"<<endl;
 }
    
return 0;
}
