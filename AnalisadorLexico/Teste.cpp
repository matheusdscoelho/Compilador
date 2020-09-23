#include <bits/stdc++.h>
using namespace std;

class Tag
{
    public:
    const static int

        // Palavras Reservadas
        PRG = 256,
        IS = 257,
        INIT = 258,
        END = 259,
        DECLARE = 260,
        INT_ = 261,
        FLOAT_ = 262,
        CHAR_ = 263,
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
        DOT = 305,
        COLON = 306,
        SQ = 307,
        DQ = 308,
        ID = 309;
};

class Token
{
    public:
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

class Int : public Token
{
    public:
    int value;

    Int(int value):Token(Tag::INT_)
    {
        value = value;
    }

    string toString()
    {
        return "" + value;
    }
};

class Word : public Token
{
private: 
    string lexeme = "";

public:
    Word(string s, int tag):Token(tag)
    {
        lexeme = s;
    }

    string toString()
    {
        return "" + lexeme;
    }

    static void fill(){
        not_ = Word("!", Tag::NOT);
        and_ = Word("&&", Tag::AND);
        or_ = Word("||", Tag::OR);
        eq = Word("==", Tag::EQ);
        ne = Word("!=", Tag::NE);
        lt = Word("<", Tag::LT);
        le = Word("<=", Tag::LE);
        gt = Word(">", Tag::GT);
        ge = Word(">=", Tag::GE);
        in = Word(">>", Tag::IN);
        out = Word("<<", Tag::OUT);

        //Operadores
        assing = Word("=", Tag::ASSING);
        plus = Word("+", Tag::PLUS);
        minus = Word("-", Tag::MINUS);
        mult = Word("*", Tag::MULT);
        div = Word("/", Tag::DIV);

        //Outros Tokens
        lp = Word("(", Tag::LP);
        rp = Word(")", Tag::RP);
        semi = Word(";", Tag::SEMI);
        comma = Word(",", Tag::COMMA);
        colon = Word(":", Tag::COLON);
        sq = Word("\'", Tag::SQ);
        dq = Word("\"", Tag::DQ);
        dot = Word(".", Tag::DOT);
    }

    //Operadores Logicos
    static Word not_,
    and_,
    or_,
    eq,
    ne,
    lt,
    le,
    gt,
    ge,
    in,
    out;

    //Operadores
    static Word assing,
    plus,
    minus,
    mult,
    div;

    //Outros Tokens
    static Word lp,
    rp,
    semi,
    comma,
    colon,
    sq,
    dq,
    dot;
};

int main(){

}