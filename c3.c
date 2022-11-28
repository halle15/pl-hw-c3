#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "c3.h"
// init commit

int whichChar;
int currentNum = 0;
int totalNum = 0;
char currentChar;
char userString[250];


struct Token thisToken;

void command(void){

}

int expr(void){
    // term, optionally plus term or minus term
}

int term(void){
    // power, and optionally * power,or / power or % powerr
}
int power(void){
    // either factor, or an optional power?
}

int factor(void){
    // can be negative, but returns factor.
}

int factor1(void){

    // returns either group of expressions or a number
}

void match(TokenType tkType){



}

void *parse(char *str){
    
    currentChar = str[currentNum];
    
    thisToken = getToken();



    currentNum += 1;

    switch(thisToken.type){
        case WS:
            break;
        case EOL:
            break;
        case NUMBER:
            printf("%i NUMBER\n", thisToken.value);
            break;
        case PLUS:
            printf("%c PLUS\n", currentChar);
            break;
        case MINUS:
            printf("%c MINUS\n", currentChar);
            break;
        case DIVIDE:
            printf("%c DIVIDE\n", currentChar);
            break;
        case MULT:
            printf("%c MULTIPLY\n", currentChar);
            break;
        case REMAINDER:
            printf("%c REMAINDER\n", currentChar);
            break;
        case POWER:
            printf("%c POWER\n", currentChar);
            break;
        case LPAREN:
            printf("%c LPAREN\n", currentChar);
            break;
        case RPAREN:
            printf("%c RPAREN\n", currentChar);
            break;
        case ERROR:
            break;
        default:
            printf("NOT IMPLEMENTED: %c\n", currentChar);
    }





    if(thisToken.type != EOL){
        parse(str);
    }
    else if(thisToken.type == ERROR){
        printf("INCORRECT INPUT :(");
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


    // if the character is a digit
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
    else if(currentChar == '+'){
        tk.type = PLUS;
        return tk;
    }
    else if(currentChar == '-'){
        tk.type = MINUS;
        return tk;
    }
    else if(currentChar == '*'){
        tk.type = MULT;
        return tk;
    }
    else if(currentChar == '/'){
        tk.type = DIVIDE;
        return tk;
    }
    else if(currentChar == '%'){
        tk.type = REMAINDER;
        return tk;
    }
    else if(currentChar == '('){
        tk.type = LPAREN;
        return tk;
    }
    else if(currentChar == ')'){
        tk.type = RPAREN;
        return tk;
    }
    else if(currentChar == '\0'){
        tk.type = EOL;
        return tk;
    }
    else{
        tk.type = ERROR;
        return tk;
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