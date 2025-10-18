#include <stdio.h>
#include <string.h>

int main(void)
{
    char led[6][4] = {"OFF", "OFF", "OFF", "OFF", "OFF", "OFF"};

    for (int i = 0; i < 6 - 1; i++)
    {
        strcpy(led[i], "ON");
        for (int j = 0; j < 6; j++)
        {
            printf("%s ", led[j]);
        }
        strcpy(led[i], "OFF");
        printf("\n");
    }

    for (int i = 6 - 3; i > 0; i--)
    {
        strcpy(led[i], "ON");
        for (int j = 0; j < 6; j++)
        {
            printf("%s ", led[j]);
        }
        strcpy(led[i], "OFF");
        printf("\n");
    }

    // for (int i = 0; i < 6; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         printf("led[%d][%d] = '%c'\n", i, j, led[i][j]);
    //     }
    // }
}