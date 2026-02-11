#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){

     char verdict;
    //string verdict;


     //introduction,  Game launches;

    printf("|`````````````````````````````````````````````````````````````|\n");
    printf("|                                                             |\n");
    printf("|                                                             |\n");
    printf("|                                                             |\n");
    printf("|               GUESS        THE        NUMBER                |\n");
    printf("|                                                             |\n");
    printf("|                                                             |\n");
    printf("|.............................................................|\n");

    printf("___________________ How Lucky Are Youuu _____________________\n\n");

    do
{

    //get ready, get ready, get ready;

    int random_6digit_code, guessed_Num, random_1digit_Num, margin; //var declaration
    margin = 0;

    srand(time(NULL));

    random_6digit_code = rand() % 1000000;
    printf("\n %d - is a random six digit number \n", random_6digit_code);

//prompting gamer for a number
    printf("\nNow its your turn to guess a digit between (0 - 9)\n\n");
    scanf("%d", &guessed_Num);

    //dictating margin to prevent negative
if (guessed_Num > random_1digit_Num){
    margin = guessed_Num - random_1digit_Num;
}else{
    margin = random_1digit_Num - guessed_Num;
}

//getting the winner

if (guessed_Num != random_1digit_Num){
    printf("You LOST with a margin of %d, you guessed %d, instead the number was %d \n", margin, guessed_Num, random_1digit_Num );

}else{

    printf("\n\n\n|`````````````````````````````````````````````````````````````|\n");
    printf("|                                                             |\n");
    printf("|                                                             |\n");
    printf("|                                                             |\n");
    printf("|               YOU                    WONnnnn!               |\n");
    printf("|                                                             |\n");
    printf("|                                                             |\n");
    printf("|.............................................................|\n");
    printf("\n\n you won the mystrey number was %d\n\n\n", random_1digit_Num);

    printf("|___________________ Got lucky this time _____________________|\n");
}

//prompting a rematch

   printf("___To exit enter ('q'), rematch enter ('y')/enter____\n");
   scanf("%s", &verdict);

} while (verdict != 'q');
if (verdict == 'q'){
    printf("\n Exiting...\n");
}

return 0;
}
