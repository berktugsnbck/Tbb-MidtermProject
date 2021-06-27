#include<stdio.h>	 
#include<stdlib.h>	 
#include<time.h>	 
int main ()	 
{		 
 int number[10];
 int i,j,temp;		 	 
 srand(time(NULL));		 

for(int i=0;i<10;i++)
	number[i]=i+1;
for(i=0;i<10;i++){
		
	j=(rand()%9)+1;
 	temp= number[i];
 	number[i]=number[j];
 	number[j]=temp;	
}
	
 	for(i=0;i<10;i++)
 		printf("%d\n",number[i]);	 
  return 0;
} 

