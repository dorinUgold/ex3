#include "Lexer.h"
#include "Parser.h"

int main(int argc, char** argv) {
    Lexer lex(argv[1]);
    
    Parser parser(lex.tokenize());
    parser.parse();
    return 0;
}