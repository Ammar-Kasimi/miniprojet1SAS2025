#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

typedef struct{
        int id,age,buts,shirt;
        char name [50];
        char poste[30];
        
    }player;   
 char changepost(player c,int a,int b);

int main()
{
    
    player player1[100];
    int choice;
    int num=0;
    start:
    printf("welcom to the menu press:\n1.to add a player\n2.to modify a player's data \n3.to search for a player\n");
    scanf("%d",&choice);
    switch(choice){
    case 1:
       

           printf("enter the player's full name\n");
           scanf(" %[^\n]",player1[num].name);
            printf("enter the player's age\n");
           scanf(" %d",&player1[num].age);
            printf(" enter the player's goals scored \n");
           scanf(" %d",&player1[num].buts) ;
            printf("enter the player's post by pressing the assigned ber:\n1.attacker\n2.defence\n3.middle\n4.keeper \n");
          int postnum;
            scanf(" %d",&postnum) ;
         
            switch (postnum)
            {
            case 1:
               strcpy(player1[num].poste,"attacker"); 
                break;
                case 2:
               strcpy(player1[num].poste,"defence"); 
                break;
                case 3:
               strcpy(player1[num].poste,"middle"); 
                break;
                case 4:
               strcpy(player1[num].poste,"keeper"); 
                break;
                default:
                
                break;
            }
            printf("enter the player's shirt ber(shold be between 1 and 99)\n");
           scanf("%d",&player1[num].shirt);
           while(player1[num].shirt<1 ||player1[num].shirt>99){
            printf("that ber is out of the specified range try again");
            scanf("%d",&player1[num].shirt);
           }
           srand(time(0));
            player1[num].id=1000 +rand()%9000;
            printf("the player's id is:%d\n",player1[num].id);
            num++;
    break;    
    case 2:
           char Name[50];
        printf("what is the name of the player you want to modify\n");
        scanf(" %[^\n]",Name);

       for (int i = 0; i <num ; i++)
    {
       if(strcmp(Name,player1[i].name)==0){
       printf("choose what you want to modify\n");
       printf("1.age\n2.goals scored\n3.post");
       int choice2;
       scanf("%d",&choice2);
       
       switch (choice2)
       {
       case 1:
       printf("enter the player age\n");
       scanf("%d",&player1[i].age);
        break;
       case 2:
       printf("enter the players goal scored\n");
       scanf("%d",&player1[i].buts);
        break;
        case 3:
       printf("enter the player's new post\n");
       int postnum2;
       scanf("%d",postnum2);
         
            switch (postnum2)
            {
            case 1:
               strcpy(player1[num].poste,"attacker"); 
                break;
                case 2:
               strcpy(player1[num].poste,"defence"); 
                break;
                case 3:
               strcpy(player1[num].poste,"middle"); 
                break;
                case 4:
               strcpy(player1[num].poste,"keeper"); 
                break;
                default:
                
                break;
            }
        break;
       
       }
       break;
       }
    }
    
    case 3:
    char Name2[50];
        printf("what is the name of the player you want to search\n");
        scanf(" %[^\n]",Name2);

       for (int i = 0; i <num ; i++)
    {
       if(strcmp(Name2,player1[i].name)==0){
       printf("Name:%s\n id:%d\nage:%d\npost:%s\n,shirt number:%d\ngoals scored:%d\n",player1[i].name,player1[i].id,player1[i].age,player1[i].poste,player1[i].shirt,player1[i].buts);          
        break;
       }
    }
      break;  
    case 4:
        int id2;
        printf("what is the id of the player you want to remove\n");
        scanf(" %d",id2);

       for (int i = 0; i <num-1 ; i++)
    {
       if(id2==player1[i].id){
        for (int j = i-1; j <num; i++)
        {
           
           player1[j] =player1[j+1];

        }
        num--;
       

        break;  
        }
      
   }
   break;
}
goto start;
}

