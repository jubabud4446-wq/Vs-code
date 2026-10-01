#include <stdio.h>

int main() {   
int startHour, startMinute, endHour, endMinute;
int durationHour, durationMinute;
scanf("%d %d %d %d", &startHour, &startMinute, &endHour, &endMinute);
if ( endHour > startHour) {
    durationHour = endHour - startHour;
    if ( endMinute >= startMinute ) {
        durationMinute = endMinute - startMinute;
    } else {
        durationHour--;
        durationMinute = (60 - startMinute) + endMinute;
    }
} else if ( endHour < startHour ) {
    durationHour = (24 - startHour) + endHour;
    if ( endMinute >= startMinute ) {
        durationMinute = endMinute - startMinute;
    } else {
        durationHour--;
        durationMinute = (60 - startMinute) + endMinute;
    }
} else { // endHour == startHour
    if ( endMinute > startMinute ) {
        durationHour = 0;
        durationMinute = endMinute - startMinute;
    } else if ( endMinute < startMinute ) {
        durationHour = 23;
        durationMinute = (60 - startMinute) + endMinute;
    } else { // endMinute == startMinute
        durationHour = 24;
        durationMinute = 0;
    }
}
printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", durationHour, durationMinute);
return 0;
}
