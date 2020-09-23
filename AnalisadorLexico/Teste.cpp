#include <bits/stdc++.h>
using namespace std;

class Tag
{
    const static int

        // Palavras Reservadas
        PRG = 256,
        IS = 257,
        INIT = 258,
        END = 259,
        DECLARE = 260,
        INT = 261,
        FLOAT = 262,
        CHAR = 263,
        IF = 264,
        THEN = 265,
        ELSE = 266,
        REPEAT = 267,
        UNTIL = 268,
        WHILE = 269,
        DO = 270,
        IN = 271,
        OUT = 272,

        // Operadores
        ASSING = 287,
        EQ = 288,
        GT = 289,
        GE = 290,
        LT = 291,
        LE = 292,
        NOT = 293,
        NE = 294,
        PLUS = 295,
        MINUS = 296,
        OR = 297,
        MULT = 298,
        DIV = 299,
        AND = 300,

        //Outros tokens
        SEMI = 301,
        LP = 302,
        RP = 303,
        COMMA = 304,
        POINT = 305,
        COLON = 306,
        SQ = 307,
        DQ = 308,
        ID = 309;
};

class Token
{
    int tag;

    Token(int t)
    {
        tag = t;
    }

    string toString()
    {
        return "" + tag;
    }
};

class Num : public Token
{
    int value;

    Num(int value)
    {
        super(Tag.NUM);
        this.value = value;
    }

    string toString()
    {
        return "" + value;
    }
}

class Word : public Token
{
    string lexeme = "";

    //Operadores Logicos
    static Word not = Word("!", Tag.NOT);
    static Word and = Word("&&", Tag.AND);
    static Word or = Word("||", Tag.OR);
    static Word eq = Word("==", Tag.EQ);
    static Word ne = Word("!=", Tag.NE);
    static Word lt = Word("<", Tag.LT);
    static Word le = Word("<=", Tag.LE);
    static Word gt = Word(">", Tag.GT);
    static Word ge = Word(">=", Tag.GE);
    static Word in = Word(">>", Tag.IN);
    static Word out = Word("<<", Tag.OUT);

    //Operadores
    static Word assing = Word("=", Tag.ASSING);
    static Word plus = Word("+", Tag.PLUS);
    static Word minus = Word("-", Tag.MINUS);
    static Word mult = Word("*", Tag.MULT);
    static Word div = Word("/", Tag.DIV);

    //Outros Tokens
    static Word lp = Word("(", Tag.LP);
    static Word rp = Word(")", Tag.RP);
    static Word semi = Word(";", Tag.SEMI);
    static Word comma = Word(",", Tag.COMMA);
    static Word colon = Word(":", Tag.COLON);
    static Word sq = Word("\'", Tag.SQ);
    static Word dq = Word("\"", Tag.DQ);
    static Word point = Word(".", Tag.POINT);


    Word(string s, int tag)
    {
        super(tag);
        lexeme = s;
    }

    string toString()
    {
        return "" + lexeme;
    }
}
