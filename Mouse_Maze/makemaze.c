/*
Author: Raymond Gonzalez
Email: rayraygking@csu.fullerton.edu
Course: CPSC223c-01
Assignment: #5
Due date: May 13,2017 before midnight
Program Title: Mickey Mouse in the Sea
File Name: makemaze.c
Purpose: To make the maze including the mouse and the cheese. Does not fill in the 
maze with 'x'.
*/
#include<stdio.h>
#include"makemaze.h"
void makemaze(char maz[49][160])
{
int count;
//fill array with spaces
for(count=0;count<49;count++)
  {
  for(int z=0;z<160;z++)
    maz[count][z]=' ';
  }
//create maze walls
for(count=0;count<49;count++)
  {
  if(count==0)
    {
    for(int x=0;x<160;x++)
      maz[0][x]='x';
    }
  else if(count==48)
    {
    for(int x=0;x<160;x++)
      maz[48][x]='x';
    }
  else
    {
    maz[count][0]='x';
    maz[count][159]='x';
    }
  }
//insert the mouse and the cheese in the array
maz[24][0]='M';
maz[24][159]='C';
}
