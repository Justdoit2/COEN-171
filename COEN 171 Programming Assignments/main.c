#include<stdio.h>
#include<string.h>

struct student{
    char name[20]; int age; float gpa; char grade_level[20];
    
};

int main (){
    struct student array[1]; strcpy(array[0].name,"Dana"); array[0].age=21; array[0].gpa=2.75;
    strcpy(array[0].grade_level,"Freshmen");
    printf( "Name is %s , age is %d, gpa is %f , and grade leve is %s",array[0].name, array[0].age,array[0].gpa,array[0].grade_level);
    
}