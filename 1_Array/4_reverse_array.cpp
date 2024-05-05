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
 void reverseArray(int arr[],int n)
 {
    int s=0;
  int e=n-1;
  while(s<e)
  {
    swap(arr[s],arr[e]);
    s++;
    e--;
  }  
 }     
        
int main()
{

    int arr[]={10,20,30,40,50,60,80,100};
    int n=sizeof(arr)/sizeof(arr[0]);
    reverseArray(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
return 0;
}
