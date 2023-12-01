#include <stdio.h>
#include <string.h>
int compare(char str1[], char str2[])
{
    if (strlen(str1) > strlen(str2))
    {
        return 10;
    }
    return 0;
}
int main()
{
    char str1[50];
    char str2[50];
    printf("Nhap chuoi thu 1");
    gets(str1);
    printf("Nhap chuoi thu 2");
    gets(str2);
    printf("do dai chuoi 1 la %d\n", strlen(str1));
    printf("do dai chuoi 2 la %d\n", strlen(str2));
    if (compare(str1, str2))
    {
        printf("chuoi co do dai lon hon la %s", str1);
    }
    else
        printf("chuoi co do dai lon hon la %s", str2);
}
