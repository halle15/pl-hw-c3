#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "c3.h"
// init commit

int whichChar;
int currentNum = 0;
char currentChar
struct Token thisToken;




void match(TokenType tkType){



}

void *parse(char *str){

    char curChar = str[currentNum];
    
    thisToken = getToken();

    if(isspace(curChar) == 0){
        printf("%c", curChar);
    }
    else{
        printf("WHITESPACE");
    }
    currentNum += 1;
    if(curChar != '\0'){
        printf("\n");
        parse(str);
    }
    else{
        printf("END");
    }

    //parse will keep track of which character the iterator is on with whichchar.
    //
    
}

struct Token getToken(void){
    struct Token tk;


    if(isdigit(currentChar)){
        
    }
    // this function is meant to read the first character and then return the relevant token.
    
    return tk;
}

int main(){

    char userString[250];

    gets(userString);
    
    parse(userString);

    return 1;
}