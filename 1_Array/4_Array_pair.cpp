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

void printAllPairs(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int x = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            cout << "(" << arr[i] << "," << arr[j] << ")"
                 << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    printAllPairs(arr, n);
    return 0;
}
