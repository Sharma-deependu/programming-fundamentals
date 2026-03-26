#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
int main()
{
char name[100];
char *description; 
strcpy(name, "Krishna Kumar");


/* allocate memory dynamically */
description = malloc( 200*sizeof(char)  ); 

if( description != NULL )
{
strcpy( description, "Shivam is a student in class C");
}
else
{
fprintf(stderr, "Error - unable to allocate required memory\n");
}


printf("Name = %s\n", name ); 
printf("Description: %s\n", description );

return 0;
}