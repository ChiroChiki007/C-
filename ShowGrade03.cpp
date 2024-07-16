#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main() 
{

int score,n;
   printf( "*********   Program Show grade **********\n" );
   printf( "Write by Mr.Phuthanet watmueang\n" );
   printf( "Class  M.3/4  No.33\n" );
   printf( "***************************\n" );
for(n=1;n<=4;n++)
{
   printf( "\nInput your score %d ",n );
   scanf("%d",&score);
   //system("cls");
   //printf( "\n you score No. %d ",n, );
   printf( "\n you score %d ",n );
   if(score>=80)
   {printf( "\n Grade No.%d is A.\n ",n );}
   else if(score>=70)
   {printf( "\n Grade No.%d is B.\n ",n );}
   else if(score>=60)
   {printf( "\n Grade No.%d is C.\n ",n );}
   else if(score>=50)
   {printf( "\n Grade No.%d is D.\n ",n );}
   else
   {printf( "\n Grade No.%d is not pass. ",n );}
}
 }

