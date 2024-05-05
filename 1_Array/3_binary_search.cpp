/*
code written by Eftekher Ali Efte from Bangladesh
 email:eftekherali2000@gmail.com
pursuing computer science and engingeering in Ruet
*/
#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <stdlib.h>
#define ull unsigned long long int
#include <ctype.h>
using namespace std;
int binary_search(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
    int mid=0;
    while(s<=e)
    {
         mid=int((s+e)/2);
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }


    }
    return -1;
}
int main()
{
int arr[]={1,2,3,4,5,6,7};
      int key;
      cout<<"Enter key "<<endl;
        cin>>key;
       int n=sizeof(arr)/sizeof(arr[0]);

   cout<<binary_search(arr,n,key);
    return 0;
}
