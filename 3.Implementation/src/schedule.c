#include "header.h"
#include<stdio.h>
void schedule(){
         FILE *fptr;
            char c;
            // Open file
            fptr = fopen("schedule.txt", "r");
            // Read contents from file
            c = fgetc(fptr);
            while (c != EOF)
            {
                printf ("%c", c);
                c = fgetc(fptr);
            }
            fclose(fptr);
    }