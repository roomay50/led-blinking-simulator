#include <stdio.h>
#include <windows.h>
#include <string.h>

const int short_delay = 300;
const int long_delay = 700;
const int wait = 1000;

void sos_pattern(void)
{
    for (int i = 0; i < 3; i++)
    {
        printf(" ON ");
        Sleep(short_delay);
        printf("OFF ");
        Sleep(short_delay);
    }

    printf("\n");

    Sleep(wait);

    for (int i = 0; i < 3; i++)
    {
        printf(" ON ");
        Sleep(long_delay);
        printf("OFF ");
        Sleep(long_delay);
    }

    printf("\n");
    Sleep(wait);

    for (int i = 0; i < 3; i++)
    {
        printf(" ON ");
        Sleep(short_delay);
        printf("OFF ");
        Sleep(short_delay);
    }

    printf("\n");
    puts("Simulation for SoS pattern complete");
}

void print_leds(char led[][4])
{
    for (int i = 0; i < 6; i++)
    {
        printf("%s", led[i]);
    }

    printf("\n");
}

void rider_pattern(void)
{
    char led[6][4] = {"OFF", "OFF", "OFF", "OFF", "OFF", "OFF"};

    for (int i = 0; i < 6 - 1; i++)
    {
        strcpy(led[i], "ON");
        for (int j = 0; j < 6; j++)
        {
            printf("%s ", led[j]);
            Sleep(short_delay);
        }
        strcpy(led[i], "OFF");
        printf("\n");
        Sleep(long_delay);
    }

    for (int i = 6 - 3; i > 0; i--)
    {
        strcpy(led[i], "ON");
        for (int j = 0; j < 6; j++)
        {
            printf("%s ", led[j]);
            Sleep(short_delay);
        }
        strcpy(led[i], "OFF");
        printf("\n");
        Sleep(long_delay);
    }
}

int main(void)
{
    char pattern[20];
    char sos[4] = "sos";
    char rider[10] = "rider";
    char quit[5] = "quit";

    printf("%s", "\n(Enter quit to quit) \nEnter the blink parttern(SoS, Rider): ");
    scanf("%s", pattern);

    while (_stricmp(pattern != "quit"))
    {
        if (_stricmp(pattern, sos) == 0)
        {
            sos_pattern();
        }
        else if (_stricmp(pattern, rider) == 0)
        {
            rider_pattern();
        }
        else if (_stricmp(pattern, quit) == 0)
        {
            puts("Thank you for simulating different patterns with your LED!");
            break;
        }
        else
        {
            puts("Invalid Pattern Entered");
            break;
        }

        printf("%s", "\n(Enter quit to quit) \nEnter the blink parttern(SoS, Rider): ");
        scanf("%s", pattern);
    }
}