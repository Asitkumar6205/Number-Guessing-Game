#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

    int main(){
        int num, guess, nguesses=1;
        srand(time(0)); num = rand()%100+1;
        
        do{printf("Guess The Number between 1 to 100\n");
           scanf("%d",&guess);       
            if(guess>num){
            printf("Lower No. Please\n");   
            }
            else if(guess<num){
            printf("Greater No. Please\n");
            }
            else{
            printf("You Guessed it in %d attempts\n",nguesses);
            }nguesses++;
        }while(guess!=num); 
        getch();   
        return 0;
}