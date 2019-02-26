#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
#include<math.h> 
//darshad 16co62
int binary_decimal(int);
void decimal_hexadecimal(int);
void decimal_octal(int n);  
int hexadecimal_decimal(char n[]) ;
void decimal_binary(int n);
int octal_decimal(int n);
char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};  
int main()
{     
int ch, num, dec, hex;     
char n[100];    
 do     
 {printf("\nEnter your option:\n");                
  printf("1. Binary to Decimal, Hexadecimal and Octal");         
  printf("\n2. Decimal to Binary");         
  printf("\n3. Hexadecimal to Binary");         
  printf("\n4. Octal to Binary");         
  printf("\n5. Exit\n");                 
  scanf("%d", &ch);         
  switch(ch)         
  {            
   case 1: printf("\nEnter Binary number: ");                         
           scanf("%d", &num);                         
           dec=binary_decimal(num);                                        
           decimal_hexadecimal(dec); 
           decimal_octal(dec);
           printf("\n");                         
   break;             
   case 2:printf("\nEnter Decimal number:");                         
	      scanf("%d", &num);                         
	      decimal_binary(num);                        
   break;             
   case 3:printf("\nEnter Hexadecimal number:");                         
	      scanf("%s", n);                        
	      decimal_binary(hexadecimal_decimal(n));                         
   break;             
   case 4:printf("\nEnter Octal number: ");                         
	      scanf("%d", &num);                         
	      decimal_binary(octal_decimal(num));
   break;             
   case 5: exit(0);            
   default:printf("\nInvalid option\n");         
	}  }
while(ch);
}  
int binary_decimal(int n) {     
int no=0, i=0;     
while(n>0)     
{         
no+=(n%10)*pow(2, i);         
n=n/10;         
i++;     
}     
return no; 
}  
void decimal_hexadecimal(int n) {     
char D_H[30], i, j, rem;     
for(i=0; n!=0; i++)
 {         rem=n%16;         
 D_H[i]=hex[rem];         
 n/=16;     
 }    
  printf("Hexadecimal is:");     
 for(j=i-1; j>=0; j--)         
 printf("%c", D_H[j]); 
 } 
 
void decimal_octal(int n) 
{     char D_H[30], i, j, rem;     
for(i=0; n!=0; i++)     
{         rem=n%8;        
 D_H[i]=hex[rem];        
  n/=8;     }     
  printf("\nOctal is:");     
  for(j=i-1; j>=0; j--)         
  printf("%c", D_H[j]); 
  } 
   
int hexadecimal_decimal(char n[]) 
{     int i, j=0, no=0, num[60];     
for(i=0; i<strlen(n); i++)    
 {         
 if(n[i]=='A')             
 num[i]=10;         
 else if(n[i]=='B')             
 num[i]=11;         
 else if(n[i]=='C')             
 num[i]=12; 
else if(n[i]=='D')             
num[i]=13;         
else if(n[i]=='E')            
num[i]=14;         
else if(n[i]=='F')            
num[i]=15;         
else            
num[i]=(int)n[i]-48;    
}     
for(i=strlen(n)-1; i>=0; i--, j++)      
no+=num[i]*pow(16, j);    
return no; }  
void decimal_binary(int n) 
{    
 int D_B[40], i, j;    
  for(i=0; n>0; i++, n=n/2)  
 D_B[i]=n%2;   
printf("\nBinary is:"); 
for(j=i-1; j>=0; j--)       
printf("%d ", D_B[j]); }  
int octal_decimal(int n){
int no=0, i=0;  
while(n>0)   
{     
 no+=(n%10)*pow(8, i);  
 n=n/10;      
 i++;   
}   
return no;
} 
