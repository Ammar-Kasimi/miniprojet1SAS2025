#include <stdio.h>
#include <string.h>
#include <stdlib.h>  
int main() {
    char name[100];
    int Nreussite=0;
    float moyen=0;
    float notePlusEleve=0;
    float lowestgrade=20;
    int N_students;
    char letter;
    int choice;
    printf("hello, please specify how many students you have in your class\n");
    scanf("%d",&N_students);
       char S_names[N_students][100];
       float grade[N_students];
    while(N_students>30)
    {
        printf("the programme can only store the grades of 30 students at most, please try again");
        scanf("%d",&N_students);
    }

        printf("please enter the name of the student \n");
    for(int i = 0 ;i<N_students;i++){
        if (i>0){
        printf("please enter the name of the next student \n");
        }
       scanf("%100s",S_names[i]);
        printf("please enter the grade of the student \n");
        
        scanf("%g",&grade[i]);
       
        }
       for(int i=0; i<N_students;i++){
        moyen+=grade[i];
    }
    moyen/=N_students;
   
    for(int i=0;i<N_students;i++){
        if (grade[i]>notePlusEleve){
            notePlusEleve=grade[i];
        }

    }
   
    for(int i=0;i<N_students;i++){
        if (grade[i]<lowestgrade){
            lowestgrade=grade[i];
    }
    }
    for(int i=0;i<N_students;i++){
        if(grade[i]>10){
            Nreussite+=1;
        }
    }
    
    while (1==1)
    {
        /* code */
    
    printf ("choose what you wish to view");
    scanf("%d",&choice);
    switch(choice){
    case 1:
     printf("the moyen of the class is %g\n",moyen);
    break;
    case 2:
     printf("la note la plus eleve est dans la class est %g\n",notePlusEleve);
     break;
     case 3:
    printf("la note la plus basse dans la class est %g\n",lowestgrade);
    break;
    case 4:
    printf("%d etudiants ont reussi \n");
    break;
    case 5:
    scanf("%s",name);
    for(int i=0;i<N_students;i++){
        if (name==S_names[i]){
           
           
        printf("%s has scored %g in the test\n",name,grade[i]);
        }
    }
    default:
    printf("please choose one of the choices above");
}
}
    return 0;
}
