#include<stdio.h>
#define __HEADER_H
    void team();
    void player();
    void schedule();
    void stats_season();
    void stats_player();
    void umpires();
    void owners();


int main(){
    char ch;

	printf("\n\t\t\t----------------------------------\n\t\t\t\t------WElcome To-----");
	printf("\n\n\t \t \t\tIPL CRICKET MANAGEMENT\n\t\t\t----------------------------------");
	printf("\n\n MADE BY : ABHISHEK KUMAR ");
	printf("\n\n\t\t\tPress any key to Continue \n:");

    int option=0;
    while(option!=8){

        printf("\n1.Display all teams in IPL\n2.Members of all teams respectively with their coaching staff\n3.Tournament schedule with venue.\n4.Stats of this season(2019)\n5.Stats of all the players\n6.Know about Umpires in IPL 2019.\n7.Owners of all the IPL teams\n8.exit \n ");
        printf("Please Choose the following Option \n: ");
        scanf("%d",&option);

        if(option>8|| option<1){
                printf("You have Enter the wrong option please Reenter \n");
        }
        else{
            switch(option){
            case1:{
                team();
                break;
            }
            case2:{
                player();
                break;
            }
            case3:{
                schedule();
                break;
            }
            case4:{
                stats_season();
                break;
            }
            case5:{
                stats_player();
                break;
            }
            case6:{
                umpires();
                break;
            }
            case7:{
                owners();
                break;
            }
            case8:{
                 printf("**-----------------------------------------------------------------***\n");
                 printf("              THANK YOU FOR VISITING                                 \n");
                 printf("***-----------------------------------------------------------------***\n");
                 return 0;
            }
        }
    }
}

    void team(){
        FILE *fptr;
            char c;
            // Open file
            fptr = fopen("team.txt", "r");
            // Read contents from file
            c = fgetc(fptr);
            while (c != EOF)
            {
                printf ("%c", c);
                c = fgetc(fptr);
            }
            fclose(fptr);
    }
    void player(){
        printf("\n\nenter the the team of which you want see the members of :");
            printf("\n 1.CSK\n 2.DC\n 3.KX1P\n 4.KKR\n 5.MI\n 6.RR\n 7.RCB\n 8.SH\n");
            int team_name=0;
            scanf("%d",&team_name);
            switch(team_name)
            {
            case 1:
            {
                FILE *fptr;
                char c;
                // Open file
                fptr = fopen("csk.txt", "r");
                // Read contents from file
                c = fgetc(fptr);
                while (c != EOF)
                {
                    printf ("%c", c);
                    c = fgetc(fptr);
                }
                fclose(fptr);
                break;

            }
            case 2:
            {
                FILE *fptr;
                char c;
                // Open file
                fptr = fopen("dc.txt", "r");
                // Read contents from file
                c = fgetc(fptr);
                while (c != EOF)
                {
                    printf ("%c", c);
                    c = fgetc(fptr);
                }
                fclose(fptr);
                break;

            }
            case 3:
            {
                FILE *fptr;
                char c;
                // Open file
                fptr = fopen("kxp.txt", "r");
                // Read contents from file
                c = fgetc(fptr);
                while (c != EOF)
                {
                    printf ("%c", c);
                    c = fgetc(fptr);
                }
                fclose(fptr);
                break;

            }
            case 4:
            {
                FILE *fptr;
                char c;
                // Open file
                fptr = fopen("mi.txt", "r");
                // Read contents from file
                c = fgetc(fptr);
                while (c != EOF)
                {
                    printf ("%c", c);
                    c = fgetc(fptr);
                }
                fclose(fptr);
                break;

            }
            case 5:
            {
                FILE *fptr;
                char c;
                // Open file
                fptr = fopen("rr.txt", "r");
                // Read contents from file
                c = fgetc(fptr);
                while (c != EOF)
                {
                    printf ("%c", c);
                    c = fgetc(fptr);
                }
                fclose(fptr);
                break;

            }
            case 6:
            {
                FILE *fptr;
                char c;
                // Open file
                fptr = fopen("rcb.txt", "r");
                // Read contents from file
                c = fgetc(fptr);
                while (c != EOF)
                {
                    printf ("%c", c);
                    c = fgetc(fptr);
                }
                fclose(fptr);
                break;

            }
            case 7:
            {
                FILE *fptr;
                char c;
                // Open file
                fptr = fopen("sh.txt", "r");
                // Read contents from file
                c = fgetc(fptr);
                while (c != EOF)
                {
                    printf ("%c", c);
                    c = fgetc(fptr);
                }
                fclose(fptr);
                break;

            }
        }
    }
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
    void stats_season(){
        FILE *fptr;
            char c;
            // Open file
            fptr = fopen("stats.txt", "r");
            // Read contents from file
            c = fgetc(fptr);
            while (c != EOF)
            {
                printf ("%c", c);
                c = fgetc(fptr);
            }
            fclose(fptr);
    }
    void stats_player(){
            printf("\nstats of players in categories as follows select as you want:");
            printf("\n1.Most runs.");
            printf("\n2.Most wickets");
            printf("\n3.Players with Purple cap");
            printf("\n4.Players with orange cap\n");
            int statsplayer=0;
            scanf("%d",&stats_player);

            switch (statsplayer)
            {

            case 1:
            {

                FILE *fptr;
                char c;
                // Open file
                fptr = fopen("mostruns.txt", "r");
                // Read contents from file
                c = fgetc(fptr);
                while (c != EOF)
                {
                    printf ("%c", c);
                    c = fgetc(fptr);
                }
                fclose(fptr);
                break;

            }
            case 2:
            {

                FILE *fptr;
                char c;
                // Open file
                fptr = fopen("mostwickets.txt", "r");
                // Read contents from file
                c = fgetc(fptr);
                while (c != EOF)
                {
                    printf ("%c", c);
                    c = fgetc(fptr);
                }
                fclose(fptr);
                break;

            }
            case 3:
            {

                FILE *fptr;
                char c;
                // Open file
                fptr = fopen("purple.txt", "r");
                // Read contents from file
                c = fgetc(fptr);
                while (c != EOF)
                {
                    printf ("%c", c);
                    c = fgetc(fptr);
                }
                fclose(fptr);
                break;

            }
            case 4:
            {

                FILE *fptr;
                char c;
                // Open file
                fptr = fopen("orange.txt", "r");
                // Read contents from file
                c = fgetc(fptr);
                while (c != EOF)
                {
                    printf ("%c", c);
                    c = fgetc(fptr);
                }
                fclose(fptr);
                break;

            }

         }
    }
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
    void owners(){
        FILE *fptr;
                char c;
                // Open file
                fptr = fopen("owners.txt", "r");
                // Read contents from file
                c = fgetc(fptr);
                while (c != EOF)
                {
                    printf ("%c", c);
                    c = fgetc(fptr);
                }
                fclose(fptr);
    }




}

