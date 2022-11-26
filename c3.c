#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "c3.h"
// init commit

int whichChar;
struct Token thisToken;




void match(TokenType tkType){



}

void parse(){

    //parse will keep track of which character the iterator is on with whichchar.
    //

}

struct Token getToken(void){
    struct Token tk;

    // this function is meant to read the first character and then return the relevant token.

    return tk;
}

int main(){

    char userString[100];

    scanf("%s", userString);

    char c = ' ';

    int i = isspace(c);
    
    printf("True: %i ", i);

    return 1;
}