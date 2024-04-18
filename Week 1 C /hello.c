#include <cs50.h> // added cs50 library
#include <stdio.h>

int main(void)
{
    string name = get_string("What's your name? "); // asks user for name

    printf("Hello, %s\n", name); // prints output hello + user's name
}
