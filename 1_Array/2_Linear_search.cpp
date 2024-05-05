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

int linear_search(int arr[],int n,int key) 
{
    for(int i=0;i<n;i++){
        if(arr[i]==key)
        {
            cout<<"Key Element:"<<i<<" "<<" Found "<<endl;
            return 0;
        }
      
    }
    cout<<"not found"<<endl;
    return -1;
}    
        
int main()
{
      int arr[]={1,2,3,4,5,6,7};
      int key;
      cout<<"Enter key "<<endl;
        cin>>key;
       int n=sizeof(arr)/sizeof(arr[0]);

       linear_search (arr,n,key);

return 0;
}
