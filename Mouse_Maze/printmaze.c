/*
Author: Raymond Gonzalez
Email: rayraygking@csu.fullerton.edu
Course: CPSC223c-01
Assignment: #5
Due date: May 13,2017 before midnight
Program Title: Mickey Mouse in the Sea
File Name: printmaze.c
Purpose: To print the entire maze after it is filled with 'x'
*/
#include<stdio.h>
#include"printmaze.h"
void printmaze(char maz[49][160])
{
int count1;
int count2;
int i;
//start at position (1,1) and print each row one by one
printf("\033[1;1H");
for(count1=0;count1<49;count1++)
  {
  for(count2=0;count2<160;count2++)
    {
//print out M and C in red
    if((count1==24&&count2==0)||(count1==24&&count2==159))
      {
      printf("\x1B[31m");
      printf("%c",maz[count1][count2]);
      printf("\x1B[0m");
      }
    else
      {
      printf("%c",maz[count1][count2]);
      }
    
    }  
   printf("\033[1B");
   for(i=0;i<160;i++)
   {
     printf("\033[1D");
   }
  }
}

