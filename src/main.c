#include <stdio.h>
#include <windows.h>
#include <string.h>

const char *led_on = "LED ON";
const char *led_off = "LED OFF";
const int delay_time = 1000;

void turn_led_on(void)
{
    puts(led_on);
    Sleep(delay_time);
}

void turn_led_off(void)
{
    puts(led_off);
    Sleep(delay_time);
}

int main(void)
{
    unsigned int count_blink;
    char state[8];
    char on[4] = "on";
    char off[4] = "off";

    printf("\nEnter number of LED blinks (an integer)");
    scanf("%d", &count_blink);
    printf("\nEnter the initial state of the MCU (on or off)");
    scanf("%s", state);

    // Using a for loop to silmulate LED blinking
    for (int i = 0; i < count_blink; i++)
    {
        if (_stricmp(state, on) == 0)
        {
            turn_led_on();
            turn_led_off();
        }
        else if (_stricmp(state, off) == 0)
        {
            turn_led_off();
            turn_led_on();
        }
        else
        {
            puts("Invalid state Entered");
            break;
        }
    }

    printf("\nSimulation for %d LED blinks complete\n", count_blink);
}