#include <stdio.h>
#include <stdlib.h>

struct student{
    char name[20];
    int id;
    char department[20];
};
 struct student s1;
 struct student s2;

 int main(){
    strcpy(s1.name, "Tareq");
    s1.id = 953;
    strcpy(s1.department, "CSE");


    printf("%s\n%d\n%s", s1.name, s1.id, s1.department);

    return -100;
 }








