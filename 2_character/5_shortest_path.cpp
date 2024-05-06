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
    char route[1000];
    cin.getline(route, 1000);
    int x=0;
    int y=0;
    for(int i=0; route[i]!='\0'; i++)
    {
        switch(route[i])
        {
            case 'N':
                    y++;
                    break;
            case 'S':
                    y--;
                    break;
            case 'E':
                    x++;
            case 'W':
                    x--;

        }

    }
    cout<<"Final X:"<<x<<"Final Y:"<<y<<endl;
    if(x>=0 and y>=0)
    {
        while (y--)
        {
            cout<<"N";


        } 
        while (x--)
        {
            cout<<"E";
        }
          
    }    

return 0;
}
