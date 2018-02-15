/*
Author: Raymond Gonzalez
Email: rayraygking@csu.fullerton.edu
Course: CPSC223c-01
Assignment: #5
Due date: May 13,2017 before midnight
Program Title: Mickey Mouse in the Sea
File Name: createinside.c
Purpose: To fill the maze up to the percent density with random locations of 'x' 
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"createinside.h"
void createinside(char maz[49][160],float den)
{
//7426 slots inside
float percent=den/100;
int stop=(7426*percent);
int count=0;
int c;
int r;
//random seed
srand(time(NULL));
//loop to fill the maze
while(count<stop)
  {
  c= rand()%160;
  r= rand()%49;
//prevent the three spaces in front of the cheese and start point from being blocked
  if((c==1&&(r<=25&&r>=23))||(c==158&&(r<=25&&r>=23)))
    {
    
    }
  else if(maz[r][c]==' ')
    {
    maz[r][c]='x';
    count++;
    }
  }
}

