
typedef enum {PLUS, MINUS, DIVIDE, MULT, REMAINDER, POWER, LPAREN, RPAREN, NUMBER, ERROR, EOL, WS} TokenType;

struct Token {
    TokenType type;
    int value;
};
void command(void);
int expr(void);
int term(void);
int power(void);
int factor(void);
 
int factor1(void);
void error(void);
void *parse(char *str);
struct Token getToken(void);

