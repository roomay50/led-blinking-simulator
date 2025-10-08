#include <stdio.h>
#include <windows.h>
#include <string.h>

const char *led_on = "LED ON";
const char *led_off = "LED OFF";
const int delay_time = 1000;

int main(void)
{
    unsigned int count_blink;
    char state[8];
    char on[4] = "on";
    char off[4] = "off";

    printf("\nEnter number of LED blinks (an integer)");
    scanf("%d", &count_blink);
    printf("\nEnter the initial state iof the MCU (on or off)");
    scanf("%7s", &state);

    // Using a for loop to silmulate LED blinking
    for (int i = 0; i < count_blink; i++)
    {
        if (_stricmp(state, on) == 0)
        {
            puts(led_on);
            Sleep(delay_time);
            puts(led_off);
            Sleep(delay_time);
        }
        else if (stricmp(state, off) == 0)
        {
            puts(led_off);
            Sleep(delay_time);
            puts(led_on);
            Sleep(delay_time);
        }
        else
        {
            puts("You did not enter a valid state");
            break;
        }
    }

    printf("%s", "\nSimulation for %d LED blinks complete\n", count_blink);
}