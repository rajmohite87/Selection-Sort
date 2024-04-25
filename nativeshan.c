#include <stdio.h>
#include <string.h>
void naiveStringMatch(char *txt, char *pat)
{
    int M = strlen(pat);
    int N = strlen(txt);
    for (int i = 0; i <= N - M; i++)
    {
        int j;
        for (j = 0; j < M; j++)
            if (txt[i + j] != pat[j])
                break;
        if (j == M)
            printf("Pattern found at index %d\n", i);
    }
}
int main()
{
    char txt[100], pat[100];
    printf("Enter the text string: ");
    scanf("%s", txt);
    printf("Enter the pattern string: ");
    scanf("%s", pat);
    naiveStringMatch(txt, pat);
    return 0;
}