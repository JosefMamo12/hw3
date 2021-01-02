#include <stdio.h>
#include "txt_functions.h"

int main(int argc, char const *argv[])
{

    char c, ans, temp;
    char s[LINE];
    char w[WORD];
    char t[WORD];

    int i = 0;
    while (((c = getc(stdin)) != ' '))
    {
        t[i++] = c;
    }
    t[i] = 0;

    while (((c = getc(stdin)) != '\n')) 
    {
        ans = c;
        temp = c;
    }
    s[0] = temp;

    if (ans == 'a')
    {
        while ((c = getc(stdin)) != EOF)
        {   
            s[0] = c;
            getlines(s);
            if (substring(s, t) == 1)
            {
                print_lines(s);
            }
        }
    }
    else if (ans == 'b')
    {
        while ((c = getc(stdin)) != EOF)
        {
            w[0] = c;
            getword(w);
            if (similar(w, t, 1) == 1)
                print_similar_words(w);
        }
    }
}
