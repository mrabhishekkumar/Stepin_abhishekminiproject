int main(){
    char ch;

	printf("\n\t\t\t----------------------------------\n\t\t\t\t------WElcome To-----");
	printf("\n\n\t \t \t\tIPL CRICKET MANAGEMENT\n\t\t\t----------------------------------");
	printf("\n\n MADE BY : ABHISHEK KUMAR ");
	printf("\n\n\t\t\tPress any key to Continue \n:");


    while(1){

        printf("\n1.Display all teams in IPL\n2.Members of all teams respectively with their coaching staff\n3.Tournament schedule with venue.\n4.Stats of this season(2019)\n5.Stats of all the players\n6.Know about Umpires in IPL 2019.\n7.Owners of all the IPL teams\n8.exit \n ");
        printf("Please Choose the following Option \n: ");
        int option;
        scanf("%d",&option);

            switch(option){
            case 1:{
                team();
                break;
            }
            case 2:{
                player();
                break;
            }
            case 3:{
                schedule();
                break;
            }
            case 4:{
                stats_season();
                break;
            }
            case 5:{
                stats_player();
                break;
            }
            case 6:{
                umpires();
                break;
            }
            case 7:{
                owners();
                break;
            }
            case 8:{
                 printf("***----------------------------------------------------------------***\n");
                 printf("              THANK YOU FOR VISITING                                 \n");
                 printf("***-----------------------------------------------------------------***\n");
                 exit(0);
            }
        }

}






return 0;
}
