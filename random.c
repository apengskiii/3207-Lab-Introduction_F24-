// random.c which includes the randchar function
#include <stdlib.h>

char randchar() {   //randchar function that returns a random character from 'A' to 'Z'
    return 'A' + (rand() % 26);
}
