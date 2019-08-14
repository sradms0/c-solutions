#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

void roll_message(int roll);

int roll_dice(void);

int rand_int(void);

bool play_game(void);

int main(void)
{
    srand((unsigned) time(NULL));
    bool win;
    bool playing = true;

    while(playing) {
        win = play_game();

        if (win) printf("You win!");
        else printf("you lose!");

        printf("\n\nPlay again? ");
        playing = (tolower(getchar())) == 'y';
        getchar();
        printf("\n");
    }


    return 0;
}

void roll_message(int roll)
{
    printf("You rolled: %d\n", roll);
}

int rand_int(void)
{
    return (rand() % 7) + 1;
}

int roll_dice(void)
{
    return rand_int() + rand_int();
}

bool play_game(void)
{
    bool win = false;
    int roll = roll_dice(),
        point = 0;

    roll_message(roll);
    if (roll == 7 || roll == 11) win = true;
    else if (roll == 2 || roll == 3 || roll == 12) win = false;
    else point = roll;

    if (point) {
        printf("Your point is %d\n", point);
        do {
            roll = roll_dice();
            roll_message(roll);
        } while(roll != point && roll != 7);

        win = roll == point;
    }

    return win;
}
