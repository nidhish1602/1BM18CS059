//
//  main.c
//  ds_project
//
//  Created by NIdhish Lakhinana  on 8/6/19.
//  Copyright © 2019 Nidhish Lakhinana. All rights reserved.

#include<stdio.h>

struct marks{
    char name[30];
    char usn[12];
    float marks[5];
}s1;

int main()
{
    printf("enter the student's details:\n");
    printf("student's name:");
    scanf("%s", s1.name);
    printf("\nstudent's USN:");
    scanf("%s", s1.usn);
    printf("\nEnter student's marks in the following order");
    printf("COA, DS, DM, Java, MP, LD\n");
    for(int i=0; i<6; i++)
    {scanf("%f", &s1.marks[i]);}
    
    printf("\nthe entered student's datails:\n");
    printf("student's name:%s\n", s1.name);
    printf("student's USN:%s\n", s1.usn);
    printf("student's marks in 3rd SEM\n");
    char a[][6]={"COA", "DS", "DM", "Java", "MP", "LD", "\0"};
    for(int i=0; i<6; i++)
    {
        printf("%s:%f\n", a[i], s1.marks[i]);
    }
    return 0;
}
