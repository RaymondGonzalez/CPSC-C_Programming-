/*
Author: Raymond Gonzalez
Email: rayraygking@csu.fullerton.edu
Course: CPSC223c-01
Assignment: #5
Due date: May 13,2017 before midnight
Program Title: Mickey Mouse in the Sea
File Name: moveforward.c
Purpose: Move forward one based on the current position and direction. This function 
also prints out to the screen the 
*/
#include<stdio.h>
#include<stdlib.h>
#include"moveforward.h"
int moveforward(char maz[49][160],int x,int y, char direct)
{
  int newcoord=0;
  switch(direct)
  {
    case'N':
      {
        newcoord=y-1;
//make text red
        printf("\x1B[31m");        
        printf("\033[%d;%dH",newcoord+1,x+1);
        printf("M");
        fflush(stdout);
//make te
        printf("\x1B[32m");      
        printf("\033[%d;%dH",y+1,x+1);
        printf("M");
        fflush(stdout);
        break;
      }
    case'E':
      {
        newcoord=x+1;
        printf("\x1B[31m");   
        printf("\033[%d;%dH",y+1,newcoord+1);
        printf("M");
        fflush(stdout);
        printf("\x1B[32m"); 
        printf("\033[%d;%dH",y+1,x+1);
        printf("M");
        fflush(stdout);
        break;
      }
    case'S':
      {
        newcoord=y+1;
        printf("\x1B[31m");   
        printf("\033[%d;%dH",newcoord+1,x+1);
        printf("M");
        fflush(stdout);
        printf("\x1B[32m"); 
        printf("\033[%d;%dH",y+1,x+1);
        printf("M");
        fflush(stdout);
        break;
      }
    case'W':
      {
        newcoord=x-1;
        printf("\x1B[31m");   
        printf("\033[%d;%dH",y+1,newcoord+1);
        printf("M");
        fflush(stdout);
        printf("\x1B[32m"); 
        printf("\033[%d;%dH",y+1,x+1);
        printf("M");
        fflush(stdout);
        break;
      }
  }
printf("\x1B[0m"); 
return newcoord;
}
