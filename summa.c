#include <stdio.h>
/*
enum day {
    MON=100,
    TUE,
    WED,
    THU,
    FRI,
    SAT,
    SUN=200
};

int main() {
    enum day t = SAT;
    printf("%d", t);
    return 0;
}
enum color {RED, GREEN, BLUE};

int main() {
    enum color c;
    c = GREEN;
    printf("%d", c);
}*/
#include <stdio.h>

enum level {LOW, MEDIUM, HIGH};

int main() {
    enum level l = MEDIUM;

    switch(l) {
        case LOW: printf("Low level"); break;
        case MEDIUM: printf("Medium level"); break;
        case HIGH: printf("High level"); break;
    }
}
