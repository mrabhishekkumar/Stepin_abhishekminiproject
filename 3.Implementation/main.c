#include<stdio.h>

int main()
{
    
    int USER_OPTION=0;
    while(USER_OPTION!=8)
    {
        printf("\n1.Display all teams in IPL\n2.Members of all teams respectively with their coaching staff\n3.Tournament schedule with venue.\n4.Stats of this season(2019)\n5.Stats of all the players\n6.Know about Umpires in IPL 2019.\n7.Owners of all the IPL teams\n8.exit\n");
        printf("Please Choose the following Option : ");
        scanf("%d",&USER_OPTION);

        if(USER_OPTION>8||USER_OPTION<1)
            printf("\nYou have intered Invalid Input Please Try Again\n ");

        switch(USER_OPTION)
        {
        case 1:
        {
            Team_data();
            break;
        }

        case 2:
        {
           all_player();
            break;

        }
        case 3:
        {
            schedule_data();
            break;

        }
        case 4:
        {
            stats_data();
            break;
        }
        case 5:
        {

           stats_player_data();
            break;
        }
        case 6:
        {
           
               umpires_data();
                break;
           
        }
        case 7:
        {
            
               owners_data();
                break;
        }
       
        
        case 8:
        {
            printf("-----------------------------------------------------------------\n");
            printf("              THANK YOU FOR USE                                  \n");
            printf("-----------------------------------------------------------------\n");
            return 0;
        }
        }
    }

}