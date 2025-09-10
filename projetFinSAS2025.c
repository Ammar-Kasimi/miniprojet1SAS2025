#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int count = 0;
typedef struct
{
    int id;
    char model[60];
    int capacite;
    char status[60];

} avion;
avion plane[50];
avion addAvion(int a)
{
    char name[50];
    char statut;
    int Schoice;
    printf("please enter the plane's model\n");
    scanf(" %[^\n]", name);
    plane[a].id = count + 1;
    strcpy(plane[a].model, name);
    printf("please enter the plane's capacity\n");
    scanf("%d", &plane[a].capacite);
addStart:
    printf("please enter the plane's status,press:\n");
    printf("1.if the plane is Disponible\n");
    printf("2.if the plane is in maintenance\n");
    printf("3.if the plane is in air\n");
    scanf("%d", &Schoice);
    switch (Schoice)
    {
    case 1:
        strcpy(plane[a].status, "Disponible");
        break;
    case 2:
        strcpy(plane[a].status, "en maitenance");
        break;
    case 3:
        strcpy(plane[a].status, "in air");
        break;
    default:
        printf("the number you entered is invalid please try again\n");
        goto addStart;
        break;
    }

    return plane[a];
}
avion modAvion()
{
}

void listAvion()
{
    for (int i = 0; i < count; i++)
    {
        printf("%s | id:%d | capaciaty:%d | status:%s\n", plane[i].model, plane[i].id, plane[i].capacite, plane[i].status);
    }
}

int main()
{

    int choice1;
    printf("welcome to the programme please choose wich menu do you wanna access\n");
mainStart:
    printf("1.gestion d'avions\n");
    printf("2.gestion d'airoport\n");
menu:
    scanf("%d", &choice1);
    switch (choice1)
    {
    case 1:
        int choice2;

    menuStart:
        int back = 0;
        printf("choose from the options below\n");
        printf("1.ajouter une avion\n");
        printf("2.modifier le data d'une avion\n");
        printf("3.supprimer une avion\n");
        printf("4.afficher la liste des avions\n");
        printf("5.rechercher un avion\n");
        printf("6.trier les avions\n");
        scanf("%d", &choice2);

        switch (choice2)
        {
        case 1:
            plane[count] = addAvion(count);
            count++;
            goto menuStart;
            break;

        case 2:
            int choice3;
            int choice4;
            listAvion();
            printf("enter the plane's id to modify its data\n");
        IDstart:
            scanf("%d", &choice3);
            if (0 >= choice3 || choice3 > count)
            {
                printf("there is no plane with that id please try again\n");
                goto IDstart;
            }
        modStart:
            printf("what do you wish to modify\n");
            printf("1.le model de l'avion\n ");
            printf("2.la capacite de l'avion\n");
            printf("3.le statut de l'avion\n");
            scanf("%d", &choice4);
            switch (choice4)
            {
            case 1:
                printf("enter the plane's new model\n");
                char Nmodel[60];
                scanf("%[^\n]", Nmodel);
                strcpy(plane[choice3].model, Nmodel);
                break;
            case 2:
                int Ncap;
                printf("enter the plane's new capacity\n");
                scanf("%d", Ncap);
                plane[choice3].capacite = Ncap;
                break;
            case 3:
                char Nstatus[60];
                printf("enter the plane's current status\n");
                scanf("%[^\n]", Nstatus);
                strcpy(plane[choice3].status, Nstatus);
                break;
            default:
                printf("you didnt choose one of th options please try again\n");
                goto modStart;
                break;
            }
            break;
        case 3:

            break;
        case 4:
            listAvion();

            break;
        case 5:

            break;
        case 6:

            break;
        default:

            break;
        }
        printf("if you wish to go back to the menu press 1\n");
        scanf(" %d", &back);
        if (back == 1)
        {
            goto menuStart;
        }
        break;
    case 2:

        break;

    default:
        printf("the character you pressed is invalide,please try again\n");
        goto mainStart;
        break;
    }

    printf("if you wish to go back to menu press 1");
}
