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
 int maximum_subArray_sum(int arr[],int n)
 {
    int cs=0;
    int largest=0;
    for(int i=0;i<n;i++)
    {
        cs+=arr[i];
        if(cs<0)
        {
            cs=0;
        }
        largest=max(largest,cs);
    }
    return largest;
 }     
        
int main()
{
  int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int n=sizeof(arr)/sizeof(arr[0]);
   cout<<  maximum_subArray_sum(arr,n) ;        
return 0;
}
