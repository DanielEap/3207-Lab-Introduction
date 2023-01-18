#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar(){
    //srand( (unsigned)time(NULL) );
    //add 65 to account for the ascii offset, A is 65
    return (rand() % 26) + 65;
}