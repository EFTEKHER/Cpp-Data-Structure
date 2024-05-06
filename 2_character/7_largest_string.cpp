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

    int n,largest;
    largest=0;
    cin>>n;
    cin.get();

    char sentence[1000];
    char largest_sentence[1000];
    while(n--)
    {
        cin.getline(sentence,1000);
        cout<<sentence<<endl;
        int length = strlen(sentence);
        if(length>largest)
        {
            largest=length;
            strcpy(largest_sentence,sentence);
        }
    }
      cout<<largest_sentence<<endl;  
return 0;
}
