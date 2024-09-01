//random.c that contains the function randchar()

#include <stdlib.h>

char randchar() {  //function that returns a random character 'A' to 'Z' 
  return 'A' + (rand() % 26);
}
