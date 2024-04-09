

#include <stdio.h>
#include <string.h>

int find(char *str)
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }

    return length;
}

int main()
{
    char input[100];

    printf("Enter any string: ");
    scanf("%s", input);

    int length = find(input);
    printf("Length is: %d\n", length);

    return 0;
}
