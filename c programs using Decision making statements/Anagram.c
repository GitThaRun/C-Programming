#include <stdio.h>
#include <string.h>
#define Max 256 // Maximum number of characters in ASCII
int main()
{
    char str1[100], str2[100];
    int count1[Max] = {0}, count2[Max] = {0}; // Frequnecy arrays
    int i;
    printf("Enter first string:\n");
    gets(str1);
    printf("Enter second string:\n");
    gets(str2);

    if (strlen(str1) != strlen(str2))
    {
        printf("NOT AN ANAGRAM\n");
        return 0;
    }

    // Count frequency of each character in both strings
    for (i = 0; str1[i] != '\0'; i++)
    {
        count1[(int)str1[i]]++;
        count2[(int)str2[i]]++;
    }

    // Compare frequencies of characters
    for (i = 0; i < Max; i++)
    {
        if (count1[i] != count2[i])
        {
            printf("Given String is not an Anagram\n");
            return 0;
        }
    }
    printf("Given strings are Anagrams\n");
    return 0;
}