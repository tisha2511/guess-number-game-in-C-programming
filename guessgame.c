# include<stdio.h>
# include<stdlib.h>
# include<time.h>
int main(){
    int number,guess,n=1;
    srand(time(0));
    number=rand()%100+1;
   // printf("your number is %d\n",number);
   do{
printf("guess the number between 1 to 100 \n");
scanf("%d",&guess);
if(guess>number){
    printf("oops! lower number please\n");
}
else if(guess<number){
    printf("oops! higher number please\n");
}
else{
    printf("wohoo! you guessed it in %d attempts\n",n);
}
n++;
   }while(guess!=number);
     return 0;
}