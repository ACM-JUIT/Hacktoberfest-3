#include <stdio.h>
#include <stdlib.h>
 int main()
 {
 int secretNumber=5;
 int guess;
 int guessCount=0;
 int guessLimit=3;
 int outofguesses=0;
 
 while( guess!= secretNumber&& outofguesses==0)
 {
 if(guessCount< guessLimit){
 printf("Enter a number: ");
 scanf("%d", &guess);
 guessCount++;
 }
 else {
 out of guesses=1;
 }
 }
 if(outofguesses==1){
 printf("Out of guesses!!");
 } else{
 printf("You Win!!");
 }
 return 0;
 }
