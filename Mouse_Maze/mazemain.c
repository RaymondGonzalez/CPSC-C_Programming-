/*
Author: Raymond Gonzalez
Email: rayraygking@csu.fullerton.edu
Course: CPSC223c-01
Assignment: #5
Due date: May 13,2017 before midnight
Program Title: Mickey Mouse in the Sea
File Name: mazemain.c
Purpose: algorithim for the mouse moving
*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include"makemaze.h"
#include"printmaze.h"
#include"createinside.h"
#include"turn90degreesleft.h"
#include"turn90degreesright.h"
#include"checkrightside.h"
#include"moveforward.h"
#include"checkfront.h"
int main()
{
char maze[49][160];
char direction='E';
char result='F';
int xcoord=0;
int ycoord=24;
int step=0;
int delaytime;
float density;
//7426 slots inside
//example of color font changeprintf(ANSI_COLOR_RED     "This text is RED!"     ANSI_COLOR_RESET "\n");
printf("Welcome to the Mickey Mouse Maze by Bill maze\n");
printf("Enter percent of density: ");
//user enters percent density
scanf("%f",&density);
printf("\n");
//user enters time delayed
printf("Enter the delay(milisec): ");
scanf("%d",&delaytime);
printf("\n");
makemaze(maze);
createinside(maze,density);
printf("\033[2J");
printmaze(maze);
//delay mouse for 6 seconds
sleep(6);
//loop for mouse moving 
while(xcoord!=159||ycoord!=24)
{
//stop if mouse steps exceed 5000 steps
if(step==5000)
  break;
//case 1-If right side is empty
if(checkrightside(maze,xcoord,ycoord,direction)==0)
  {
//delay mouse by user submited length
   usleep(delaytime*10000);
  direction=turn90right(direction);
  if(direction=='N'||direction=='S')
    {
    ycoord=moveforward(maze,xcoord,ycoord,direction);
    step++;
    }
  else
    {
    xcoord=moveforward(maze,xcoord,ycoord,direction);
    step++;
    }
  }
//case 2-if the front of the mouse is moveable
else if(checkfront(maze,xcoord,ycoord,direction)==0)
  {
  usleep(delaytime*10000);
  if(direction=='N'||direction=='S')
    {
    ycoord=moveforward(maze,xcoord,ycoord,direction);
    step++;
    }
  else
    {
    xcoord=moveforward(maze,xcoord,ycoord,direction);
    step++;
    }
  }
//case 3-if mouse cannot move right or front
else{
direction=turn90left(direction);  
  }
if(xcoord==159&&ycoord==24)
    result='T';
 }
//print out steps and whether it failed
printf("\033[50;1H");
printf("Total Steps=%d",step);
printf("                        Conclusion: ");
if(result=='T')
    printf("SUCCESS\n");
else
    printf("FAILURE\n");

}
