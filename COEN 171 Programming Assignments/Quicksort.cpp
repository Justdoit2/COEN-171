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
        while (arr[i]<pivot) //if all of them is sorted, then never have to enter below the if statement
            i++;
        while (arr[j]>pivot) //if  not any of these cases
            j--;
        
        //also if value is out of place, automatically go to this if statment
        if (i<=j) { //this mean the position i is less than j
            tmp=arr[i];
            arr[i]=arr[j];
            arr[j]=tmp;
            i++;
            j--;
            
        }
    }
    if (left<j) //j not finished yet
        quickSort(arr,left,j); //left j went down [2,1,] so j is  (left ) to lowest j, 21
    if (i<right)
        quickSort(arr,i,right); //right upper half so [87]

    
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
