#include <stdio.h>
#include <math.h>
//Darshad 16co62
int c = 0,num1[4]={0},num2[4]={0},diff[4]={0},sum[4]={0};
void add();
void sub();
int  main()
{
int ch;
do{
for(int i=0; i<4; i++)
{
  num1[i] = 0;
  num2[i] = 0;
  diff[i] = 0;
  sum[i] = 0;
}
  c = 0;
  printf("\n1.BINARY ADDITION\n2.BINARY SUBTRACTION\n");
  printf("Enter option:\n");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1: add();
   break;
   case 2: sub();
   break;
   default: printf("\nInvalid input: ");
  }
printf("\nPress 1 to Continue...");
scanf("%d",&ch);
}while(ch == 1);
}
void add()
{
  
  printf("\nEnter first binary number:\n");
  for(int i = 0; i<4; i++)
  {
    scanf("%d",&num1[i]);
  }
  printf("\nEnter second binary number:\n");
  for(int i = 0; i<4; i++)
  {
    scanf("%d",&num2[i]);
  }
  for(int i = 3; i >= 0; i--)
  {
    sum[i] = num1[i]+ num2[i] + c;
    if(sum[i]>=2)
	{
     c = 1;
    }
    else
        c = 0;
    sum[i] = sum[i]%2;
   }
    printf("\nBinary Addition:");
    for(int i = 0; i<4; i++)
	{
     printf("%d",sum[i]);
    }
}

void sub()
{
 printf("\nEnter first binary number:\n");
 for(int i = 0; i<4; i++)
 {
  scanf("%d",&num1[i]);
 }
 printf("\nEnter second binary number:\n");
 for(int i = 0; i<4; i++)
 {
   scanf("%d",&num2[i]);
 }
 for(int i = 3; i >= 0; i--)
 {
   diff[i] = num1[i] - num2[i];
   if(diff[i] < 0)
   {
      num1[i-1] = num1[i-1] - 1;
   }
   diff[i] = fabs(diff[i]%2);
 }
 printf("\nBinary Subtraction:");
 for(int i = 0; i<4; i++)
 {
  printf("%d",diff[i]);
 }
}

