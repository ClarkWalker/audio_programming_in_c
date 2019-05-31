
#include <stdio.h>

/* this function implements translation */
int name_to_pc(char name) {
    switch(name) {
        case 'C': case 'c':
            return 0;
        case 'D': case 'd':
            return 2;
        case 'E': case 'e':
            return 4;
        case 'F': case 'f':
            return 5;
        case 'G': case 'g':
            return 7;
        case 'A': case 'a':
            return 9;
        case 'B': case 'b':
            return 11;
    default: /* error code */
        printf("\n\n\terror code: 100\n\n\n");
        return 100;
    }
}

int main() {
    char note_1, note_2, dummy;
    int interval;
    printf("Please enter 2 natural notes.\nfirst note: ");
    scanf("%c%c", &note_1, &dummy);
    printf("Second note: ");
    scanf("%c", &note_2);
    /* To calculate the interval we call name_to_pc() */
    interval = name_to_pc(note_2) - name_to_pc(note_1);
    if (interval > 20 || interval < -11){
        printf("either %c or %c are invalid notes\n", note_1, note_2);
        return 1;
    }
    if (interval < 0) interval += 12;
    else if (interval > 11) interval -= 12;
    printf("%d semitones up or %d semitones down\n", interval, interval ? 12 - interval : 0 );

    return 0;
}
