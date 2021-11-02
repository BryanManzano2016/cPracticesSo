#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

void imprimirNro();
int imprimirStrings();
bool stringFunciones();
char *paramsFunciones(char arr[], char arr2[]);

void imprimirNro()
{
    double numDecimal;
    printf("Coloca un nro\n");
    scanf("%lf", &numDecimal);
    printf("Has introducido %lf\n", numDecimal);
}
int imprimirStrings()
{
    char c[50] = "abcd";
    char cArray[] = {'a', 'b', 'c', 'd', '\0'};
    printf("c=%s \t cArray=%s \n", c, cArray);
    return 10;
}
bool stringFunciones()
{
    bool arr[2] = {true, false};
    char str1[20] = "BeginnersBook";
    char str2[20] = "BeginnersBook2";
    printf("Length of string str1: %zu, Length of string str2: %zu \n", strlen(str1),
           strlen(str2));
    return strlen(str1) == strlen(str1) ? true : false;
}
char *paramsFunciones(char arr[], char arr2[])
{
    char *str;
    str = (char *)malloc(15);
    strcpy(str, "tutorialspoint");
    strcat(str, arr);
    strcat(str, arr2);
    return str;
}

int main()
{
    // imprimirNro();
    // imprimirStrings();
    // printf("%d \n", stringFunciones());
    // printf("%s \n", paramsFunciones("_a", "_b"));
    return 0;
}
