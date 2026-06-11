#include <stdbool.h>
#include <stdio.h>
bool canMakeArithmeticProgression(int* arr, int arrSize) {
    int i=0;
    int j=0;
    int tmp;
    int t=0;
    while(i<arrSize)
    {
        j=i+1;
        while(j<arrSize)
        {
            if (arr[i] < arr[j]) 
            {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            t=1;
            }
            j++;
        }
        i++;
    }
    int diff=arr[0]-arr[1];
    i=1;
    while(i<arrSize)
    {
        if(i+1!=arrSize && arr[i]-arr[i+1]!=diff)
        {
            return false;
        }
        i++;
    }
    return true;
}

