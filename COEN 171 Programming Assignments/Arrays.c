#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int main (){
    int n;
    printf("Enter number of students");
    
    scanf("%d",&n); //need this to continue
    
    char answer[n][20]; //string of 20 in awwary of n
    int age[n];
    float gpa[n];
    char year[n][20];
    int iter =0;
    while  (iter<n){
        scanf("%20s", answer[iter]); scanf("%d",&age[iter]); scanf("%f",&gpa[iter]); scanf("%20s",year[iter]);
        // multNames[iter]=strdup(name);
        
        iter++;
    }
    for ( int i = 0; i<n;++i){
        printf("Name is %s age is %d , gpa is %f ,and grade level is %s\n",answer[i],age[i],gpa[i],year[i]) } }
