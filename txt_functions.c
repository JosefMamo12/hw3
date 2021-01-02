#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "txt_functions.h"

int getlines(char s[])
{
    int counter = 1;
    char c;
    while ((c = getc(stdin)) != '\n')
    {
        if(c == EOF)
        break;
        s[counter++] = c;
    }
    s[counter] = 0;
    return counter;
}
int getword(char w[])
{
    int counter = 1;
    char c;
    while ((c = getc(stdin)) != ' ')
    {
        if (c == '\t' || c == '\n' || c == EOF)
            break;
        w[counter++] = c;
    }
    w[counter] = 0;
    return counter;
}
void print_lines(char *str)
{
    printf("%s\n", str);
}
void print_similar_words(char *str)
{
    printf("%s\n", str);
}
int similar(char *s, char *t, int n)
{
    int ans = 0, count = 0;
    int len = strlen(s);
    int len2 = strlen(t);
    if (len - len2 >= 0 && len - len2 < 2)
    {
        if (len - len2 == 0)
        {
            ans = isEqualStrings(s, t);
        }
        else
        {
            while (*s)
            {
                if (*s == *t)
                {
                    s++;
                    t++;
                }
                else
                {
                    s++;
                    count++;
                }
            }
            if (count == n)
                ans = 1;
            else
            {
                ans = 0;
            }
        }
    }
    return ans;
}
int substring(char *str1, char *str2)
{
    int i = 0;
    int len = strlen(str1);
    int len2 = strlen(str2);
    for (i = 0; i <= len - len2; i++)
    {
        if (isEqualStrings(str1 + i, str2))
            return 1;
    }

    return 0;
}
int isEqualStrings(char *s, char *t)
{
    while (*t)
    {
        if (*s != *t)
            return 0;
        s++;
        t++;
    }
    return 1;
}