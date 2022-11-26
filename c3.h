
typedef enum {PLUS, MINUS, DIVIDE, MULT, REMAINDER, POWER, LPAREN, RPAREN, NUMBER, ERROR, EOL} TokenType;

struct Token {
    TokenType type;
    int value;
};

int expr(void);
int term(void);
int power(void);
int factor(void);
 
int factor1(void);
void error(void);
void *parse(char *str);
void match(TokenType tkType);
struct Token getToken(void);
