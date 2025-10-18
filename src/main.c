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
    char quit[5] = "quit";

    printf("%s", "\nEnter quit to quit\nEnter the initial state of the MCU (on or off): ");
    scanf("%s", state);

    // Using a for loop to silmulate LED blinking
    while (_stricmp(state != quit))
    {
        if (_stricmp(state, quit) == 0)
        {
            printf("Thank you for simulating your LED!");
            break;
        }
        printf("%s", "\nEnter number of LED blinks (an integer)");
        scanf("%d", &count_blink);

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
            else if (_stricmp(state, quit) == 0)
            {
                printf("Thank you for simulating your LED!");
                break;
            }

            else
            {
                puts("Invalid state Entered");
                break;
            }
        }

        printf("\nSimulation for %d LED blinks complete\n", count_blink);

        char cont[4];
        printf("%s", "do you want to simulate again? (Y/N): ");
        scanf("%s", cont);

        if (_stricmp(cont, "y") == 0)
        {
            printf("%s", "\nEnter quit to quit\nEnter the initial state of the MCU (on or off): ");
            scanf("%s", state);
        }
        else if (_stricmp(cont, "n") == 0)
        {
            printf("Thank you for simulating your LED!");
            break;
        }

        else
        {
            puts("Invalid key Entered");
            break;
        }
    }
}