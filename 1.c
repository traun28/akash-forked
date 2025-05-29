#include <stdio.h>

int main() {
  int n, reverse = 0, remainder, original;

  printf("Enter an integer: ");
  scanf("%d", &n);

  original = n;  

  while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }

  if (original % 10 == 0) {
    printf("Reversed number = %d", reverse);
    
    while (original % 10 == 0) {
      printf("0");
      original /= 10;
    }
  } else {
    printf("Reversed number = %d", reverse);
  }

  return 0;
// v1.c
#include <stdio.h>

// Check if leap year
int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Get number of days in a given month
int getDaysInMonth(int month, int year) {
    switch(month) {
        case 1: return 31;
        case 2: return isLeapYear(year) ? 29 : 28;
        case 3: return 31;
        case 4: return 30;
        case 5: return 31;
        case 6: return 30;
        case 7: return 31;
        case 8: return 31;
        case 9: return 30;
        case 10: return 31;
        case 11: return 30;
        case 12: return 31;
        default: return 0;
    }
}

// Zeller’s Congruence to calculate the weekday of 1st day of a month
int getStartDay(int month, int year) {
    if (month < 3) {
        month += 12;
        year--;
    }

    int q = 1;
    int m = month;
    int k = year % 100;
    int j = year / 100;

    int h = (q + (13*(m + 1))/5 + k + (k/4) + (j/4) + 5*j) % 7;
    return (h + 6) % 7;  // Convert to Sunday = 0
}

void printCalendar(int month, int year) {
    const char *months[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    printf("\n  %s %d\n", months[month - 1], year);
    printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

    int start = getStartDay(month, year);
    int daysInMonth = getDaysInMonth(month, year);

    // Padding for first line
    for (int i = 0; i < start; i++) {
        printf("     ");
    }

    // Print all days
    for (int day = 1; day <= daysInMonth; day++) {
        printf("%5d", day);
        if ((start + day) % 7 == 0)
            printf("\n");
    }
    printf("\n");
}

int main() {
    int month, year;

    printf("Enter month (1-12): ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);

    if (month < 1 || month > 12 || year < 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printCalendar(month, year);
    return 0;
}}
