#include<stdio.h>

int main(){
    int marks;
    printf("Enter marks:\t");
    scanf("%d", &marks);

    if(marks>=80&&marks<=100){
            printf("A+");}
    if(marks>=75&&marks<=79){
            printf("A");}
    if(marks>=70&&marks<=74){
            printf("A-");}
    if(marks>=65&&marks<=69){
            printf("B+");}
    if(marks>=60&&marks<=64){
            printf("B");}
    if(marks>=55&&marks<=59){
            printf("B-");}
    if(marks>=50&&marks<=54){
            printf("C+");}
    if(marks>=45&&marks<=49){
            printf("c");}
    if(marks>=40&&marks<=44){
            printf("D");}
    if(marks>=0&&marks<=39){
            printf("Fail");}
    if(marks<0||marks>100)
        {
            printf("Invalid");}

    return 0;}

