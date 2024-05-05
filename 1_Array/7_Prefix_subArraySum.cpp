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

int* prefixS(int arr[], int n) {
    int* prefixSum = new int[n]; // Dynamically allocate memory

    prefixSum[0] = arr[0];
    for(int i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }

    return prefixSum;
}



 void subArray(int arr[],int n)
 {
    int *p=prefixS(arr,n);
    int subarraySum,maxSum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
         subarraySum=i>0?p[j]-p[i]:p[j];


        maxSum=max(maxSum,subarraySum);

        }
    }
    cout<<"maxSum="<<maxSum<<endl;
 }        
        
int main()
{

int arr[]={-2,-3,-4,-1,5,-12,-6,-1,-3};
// int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    subArray(arr,n);

     
return 0;
}
