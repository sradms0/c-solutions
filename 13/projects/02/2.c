#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50   /* maximum number of reminders */
#define MSG_LEN 60      /* max length of reminder message */
#define DATE_LEN 6
#define TIME_LEN 6
#define F_STR_LEN 10

int read_line(char str[], int n);

char *f_date_time_str(char *sf, char sep, int l, int r);

char *f_date_str(int month, int day);

char *f_time_str(int hour, int min);

int main(void)
{
  char reminders[MAX_REMIND][MSG_LEN+15];
  char date_str[DATE_LEN+1], date_str_remind[DATE_LEN+4],
       time_str[TIME_LEN+1], time_str_remind[TIME_LEN+4],
       f_date_str[F_STR_LEN], f_time_str[F_STR_LEN],
       msg_str[MSG_LEN+1];

  int month, day, 
      hr, mins, 
      i, j, 
      num_remind = 0;

  for (;;) {
    if (num_remind == MAX_REMIND) {
      printf("-- No space left --\n");
      break;
    }

    printf("Enter date, time, and reminder: ");
    scanf("%2d/%2d", &month, &day);
    if (month == 0)
      break;
    if (day < 0 || day > 31) {
        printf("Invalid day\n");
        while (getchar() != '\n');
        continue;
    }
    scanf("%2d:%2d", &hr, &mins);

    sprintf(date_str, f_date_time_str(f_date_str, '/', month, day), month, day);
    sprintf(time_str, f_date_time_str(f_time_str, ':', hr, mins), hr, mins);
    read_line(msg_str, MSG_LEN);

    for (i = 0; i < num_remind; i++)
      if (strcmp(date_str, reminders[i]) < 0 && strcmp(time_str, reminders[i]) < 0)
        break;
    for (j = num_remind; j > i; j--)
      strcpy(reminders[j], reminders[j-1]);

    strcat(strcpy(date_str_remind, date_str), "  ");
    strcat(strcpy(time_str_remind, time_str), "  ");

    strcpy(reminders[i], date_str_remind);
    strcat(reminders[i], time_str_remind);
    strcat(reminders[i], msg_str);

    num_remind++;
  }

  printf("\nDate   Time    Reminder\n");
  for (i = 0; i < num_remind; i++)
    printf("%s\n", reminders[i]);

  return 0;
}

int read_line(char str[], int n)
{
  int ch, i = 0;

  while ((ch = getchar()) != '\n')
    if (i < n)
      str[i++] = ch;
  str[i] = '\0';
  return i;
}

char *f_date_time_str(char *sf, char sep, int l, int r)
{
  char *lf = l < 10 ? "0%1d" : "%2d",
       *rf = r < 10 ? "0%1d" : "%2d";
  strcpy(sf, "");
  strcat(strcpy(sf, lf), &sep);
  strcat(sf, rf);
  return sf;
}

