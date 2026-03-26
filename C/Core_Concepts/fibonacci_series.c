#include<stdio.h>
int main(){
int n, firstterm = 0, secondterm = 1, num1,i;

printf("Enter the number of terms : \n");
scanf("%d", &n);
printf("The fibonacci series = %d ,%d",firstterm, secondterm);

for (i=3;i<=n;++i){

num1 = firstterm + secondterm;
printf("%d , ",num1);

firstterm = secondterm;
secondterm = num1;
 

}

printf("\n");

return 0;
}