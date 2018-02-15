#!/bin/bash
#The statement above is the mandatory first line of all (Bash) script files.

#This is a script file formatted for use by the Bash shell.

#Author: Raymond Gonzalez
#Email: rayraygking@csu.fullerton.edu
#Course: CPSC223c-01
#Assignment: #5
#Due date: may 13
#Program Title: Maze
#File Name: maze.sh
#Purpose: script

#Before execution this script file make sure it has "execute permission". 
# One way to do this is
#to enter the following command:
#          sudo chmod u+x maze.sh
#After permission has been given the permission will remain (until explicitly changed).

#To execute this file send the following command to Bash:
#         ./maze.sh

#First erase any old object files and old executable files,
# if any exist from past compilations
rm *.o
rm *.out

#Look at the contents of the current directory.
echo "You should see 4 C source files and memoryarc.sh in the list below."
ls -l
#Next compile 
gcc -m64 -c -std=gnu99 -Wall -o checkfront.o checkfront.c
#Next compile 
gcc -m64 -c -std=gnu99 -Wall -o moveforward.o moveforward.c
#Next compile 
gcc -m64 -c -std=gnu99 -Wall -o turn90degreesright.o turn90degreesright.c
#Next compile 
gcc -m64 -c -std=gnu99 -Wall -o checkrightside.o checkrightside.c
#Next compile 
gcc -m64 -c -std=gnu99 -Wall -o turn90degreesleft.o turn90degreesleft.c
#Next compile 
gcc -m64 -c -std=gnu99 -Wall -o createinside.o createinside.c
#Next compile 
gcc -m64 -c -std=gnu99 -Wall -o makemaze.o makemaze.c
#Next compile 
gcc -m64 -c -std=gnu99 -Wall -o printmaze.o printmaze.c
#Next compile 
gcc -m64 -c -std=gnu99 -Wall -o mazemain.o mazemain.c

#Next link nine object files together to create an executable file
gcc -m64 -std=gnu99 -o maze.out mazemain.o makemaze.o printmaze.o createinside.o turn90degreesleft.o checkrightside.o turn90degreesright.o moveforward.o checkfront.o

#Execute the executable file.
./maze.out

echo The display program has terminated
