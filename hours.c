#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

float calc_hours(int hours[], int weeks, char output);

int main(void)
{
    int weeks = get_int("Number of weeks taking CS50: ");
    // 'Weeks' is created into an array
    int hours[weeks];

    for (int i = 0; i < weeks; i++)
    {
        // Create an array of the 'hours'
        hours[i] = get_int("Week %i HW Hours: ", i);
    }

    char output;
    do
    {
        output = toupper(get_char("Enter T for total hours, A for average hours per week: "));
    }
    while (output != 'T' && output != 'A');

    printf("%.1f hours\n", calc_hours(hours, weeks, output));
}

// TODO: complete the calc_hours function
float calc_hours(int hours[], int weeks, char output)
{
    // First, look through 'hours' array and sum all of them
    int total = 0;
    // < 'weeks' bc it is any array of hours
    for (int i = 0; i < weeks; i++)
    {
        total += hours[i];
    }
    if (output == 'T')
    {
        return (float) total;
    }
    return (float) total / weeks;

}