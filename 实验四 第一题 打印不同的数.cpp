﻿#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
    int arr[10];
    for (int i = 0; i < 10; i++)
        cin >> arr[i];
    sort(arr, arr + 10);
    int new_end = unique(arr, arr + 10) - arr;
    for (int i = 0; i < new_end; i++) 
    {
        cout << arr[i] << " ";
    }
    return 0;
}