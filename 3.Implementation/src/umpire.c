  
#include "header.h"
#include<stdio.h>
void umpires(){
         FILE *fptr;
                char c;
                // Open file
                fptr = fopen("umpires.txt", "r");
                // Read contents from file
                c = fgetc(fptr);
                while (c != EOF)
                {
                    printf ("%c", c);
                    c = fgetc(fptr);
                }
                fclose(fptr);
    }