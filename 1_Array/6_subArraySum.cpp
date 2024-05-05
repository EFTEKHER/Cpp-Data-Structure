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
    int subarraySum,maxSum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            subarraySum=0;
            for(int k=i;k<=j;k++){
                subarraySum+=arr[k];
                cout<<"["<< arr[k]<<"]"<<" ";
            }
            maxSum=max(maxSum,subarraySum);
            cout<<endl;
        }
    }
    cout<<"maxSum="<<maxSum<<endl;
 }     
        
int main()
{
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int n=sizeof(arr)/sizeof(arr[0]);
     subArray(arr,n) ;  
return 0;
}
