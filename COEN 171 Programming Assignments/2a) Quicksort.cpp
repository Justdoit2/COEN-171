//
//  main.cpp
//  QuickSort
//
//  Created by Alma Niu on 2/4/17.
//  Copyright © 2017 csciClass. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include<vector>
#include<cstdlib>
#include<ctime>
#include<cassert>
#include<array>

using namespace std;

void quickSort(int arr[], int left, int right){
    
    int i=left,j=right;
    int tmp;
    int pivot=arr[(left+right)/2]; //pivot is in between
    /*partition*/
    while(i<=j)
    {
        while (arr[i]<pivot) 
            i++;
        while (arr[j]>pivot) 
            j--;
        
        
        if (i<=j) { 
            tmp=arr[i];
            arr[i]=arr[j];
            arr[j]=tmp;
            i++;
            j--;
            
        }
    }
    if (left<j) 
        quickSort(arr,left,j); 
    if (i<right)
        quickSort(arr,i,right); 

    
}
/*
 quickSort(int arr[], int
 
 */





int main() {
    // insert code here...
    
    int a[]={5,1,3,0,4};

    
    
    quickSort(a,0,4);
    for ( auto e: a){ //prints everythin out
        cout<<e<<endl;
    }
    
    return 0;
}
