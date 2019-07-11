#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
char user,y, Y,play;
bool play_again;
enum choice {ROCK, PAPER, SCISSORS};
choice select;
printf("Would you like to play Rock, Paper, Scissors? (y or n): ");
scanf("%c",&play);
if(play == 'y' || play == 'Y'){
play_again = true;
 }
while(play_again != false){
printf("\n \n Rock, Paper, or Scissors? ('r', 'p', or 's'): " );

scanf("%c",&user);
scanf("%c",&user);
printf("\n");

if (user == 'r' || user == 'R'){
 select = ROCK;
 }

else if (user == 'p' || user == 'P'){
select = PAPER;
 }

else if (user == 's' || user == 'S'){
select = SCISSORS;
 }

else {
printf(" You have chosen wrong option.\n");
printf("\nRock, Paper, or Scissors? ('r', 'p', or 's'): " );
scanf("%c",&user);
}

// Computer's inbuild function for random selection
int computer = rand();

computer = rand() % 3;

choice cpu_select;

if (computer == 0){
cpu_select = ROCK;
 }

else if (computer == 1){
cpu_select = PAPER;
 }
else if (computer == 2){
cpu_select = SCISSORS;
 }

if(select==0)
printf("\n \nYour selection is : ROCK \n");
else if(select==1)
printf("\n \nYour selection is :PAPER \n");
else
printf("\n \nYour selection is :SCISSORS\n");

if(computer==0)
printf("\n \nComputer selection is : ROCK \n");
else if(computer==1)
printf("\n \nComputer selection is :PAPER \n");
else
printf("\n \nComputer selection is :SCISSORS\n");

bool you_win = false;

if (cpu_select == select){
printf("\n Oh!, Game tied .\n");
 }
else if ((select == ROCK && cpu_select == SCISSORS) || (select == PAPER && cpu_select==ROCK)||(select == SCISSORS && cpu_select==ROCK))
{

printf(" \n Congratulations, You won the game. \n" );
 }
else {
 printf("\n Sorry, You lost the game . \n");

 }

printf( " \n Would you like to play again?: \n");
 scanf("%s",&play);


 if (play == 'n' || play == 'N'){
 play_again = false;
 }
 else if (play == 'y' || play == 'Y'){
}
 }

return 0;
}
