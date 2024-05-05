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
 void subArray(int arr[],int n)
 {
    
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++){
                cout<<"["<< arr[k]<<"]"<<" ";
            }
            cout<<endl;
        }
    }
 }     
        
int main()
{
    int arr[]={10,20,30,40,50,60,80,100};
    int n=sizeof(arr)/sizeof(arr[0]);
     subArray(arr,n) ;  
return 0;
}
