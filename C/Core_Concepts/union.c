#include <stdio.h>
#include <string.h>

union Data
{
    int integer;
    float floatingnumber;
    char str[30];
};

int main()
{

    union Data data;
    data.integer = 10;
    printf("%d\n", data.integer);
    data.floatingnumber = 30.76;
    printf("%f\n", data.floatingnumber);
    strcpy(data.str, "HELLO");
    printf("%s\n", data.str);

    return 0;
}
