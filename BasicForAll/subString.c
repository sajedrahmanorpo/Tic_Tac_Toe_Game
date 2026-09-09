#include <stdio.h>
int main()
{
    // using char

    // char T[] = "BANGLADESH";
    // int start = 3;
    // int length = 5;
    //  printf("String: ");

    //  for(int i = start; i < start + length; i++){
    //     printf("%c", T[i]);
    //  }

    // subString with string;

    char T[100];
    char s[100];
    printf("Please type the word: ");
    scanf("%s", T);
    int start;
    printf("Please type the starting word: ");
    scanf("%d", &start);
    int length;
    printf("Please type the length of the word: ");
    scanf("%d", &length);

    int i;
    for (i = 0; i < length; i++)
    {
        s[i] = T[start + i];
    }
    s[i] = '\0';

    printf("Substring: %s", s);
    return 0;
}