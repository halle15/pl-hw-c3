#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "c3.h"
// init commit

int whichChar;
int currentNum = 0;
char currentChar;
char userString[250];


struct Token thisToken;




void match(TokenType tkType){



}

void *parse(char *str){
    
    currentChar = str[currentNum];
    
    thisToken = getToken();




    switch(thisToken.type){
        case WS:
            break;
        case NUMBER:
            printf("%i NUMBER\n", thisToken.value);
            break;
        default:
            printf("NOT IMPLEMENTED: %c\n", currentChar);
    }





    currentNum += 1;
    if(currentChar != '\0'){
        parse(str);
    }
    else{
        printf("$END$");
    }

    //parse will keep track of which character the iterator is on with whichchar.
    //
    
}



struct Token getToken(void){
    struct Token tk;
    if(currentChar == ' '){
        tk.type = WS;
        return tk;
    }

    if(isdigit(currentChar) != 0){
        int ct = currentNum;
        char ctchar = userString[ct];
        int fullNum = 0;


        /*
        for(ct; isdigit(ctchar) != 0; ct++){
            ctchar = userString[ct];

        }
        */
               
        char nextChar = userString[currentNum + 1];

        int x = currentChar - '0';

        while(isdigit(nextChar) != 0){
            x = (10 * x) + (nextChar - '0');
            currentNum += 1;
            nextChar = userString[currentNum + 1];
        }

        tk.type = NUMBER;
        tk.value = x;
        
    }
    // this function is meant to read the first character and then return the relevant token.
    
    return tk;
}

int main(){

    userString[250];

    gets(userString);
    
    parse(userString);

    return 1;
}