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

 void printArray(int arr[],int n)
 {
    // cout<<"In Function "<<sizeof(arr)<<endl;
    cout<<"----Function----"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
 }     
        
int main()
{
 int arr[]={1,2,3,4,5,6,7,8,9};
 int n= sizeof(arr)/sizeof(int); 
 cout<<"In Main "<<sizeof(arr)<<endl; 

 cout<<"In Main-----------"<<endl;  
 for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
   printArray(arr,n);
return 0;
}
