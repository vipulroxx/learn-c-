#include <iostream>

using namespace std;

void printA();
void printB();
void printC();
void printD();
void printE();
void printF();
void printG();
void printH();
void printI();
void printJ();
void printK();
void printL();
void printM();
void printN();
void printO();
void printP();
void printQ();
void printR();
void printS();
void printT();
void printU();
void printV();
void printW();
void printX();
void printY();
void printZ();

void prettyBig(string str);
int main(){

  string phrase;
  cout << "Enter a phrase:";
  if( !(cin >> phrase)){
    cout << "Error reading phrase." << endl;
  } else {
    prettyBig(phrase);
  }
}

void prettyBig(string str){
  for(int i = 0; i < str.size(); ++i){
    switch (str[i]){
      case 'a': case 'A':
                printA(); break;
            case 'b': case 'B':
                printB(); break;
            case 'c': case 'C':
                printC(); break;
            case 'd': case 'D':
                printD(); break;
            case 'e': case 'E':
                printE(); break;
            case 'f': case 'F':
                printF(); break;
            case 'g': case 'G':
                printG(); break;
            case 'h': case 'H':
                printH(); break;
            case 'i': case 'I':
                printI(); break;
            case 'j': case 'J':
                printJ(); break;
            case 'k': case 'K':
                printK(); break;
            case 'l': case 'L':
                printL(); break;
            case 'm': case 'M':
                printM(); break;
            case 'n': case 'N':
                printN(); break;
            case 'o': case 'O':
                printO(); break;
            case 'p': case 'P':
                printP(); break;
            case 'q': case 'Q':
                printQ(); break;
            case 'r': case 'R':
                printR(); break;
            case 's': case 'S':
                printS(); break;
            case 't': case 'T':
                printT(); break;
            case 'u': case 'U':
                printU(); break;
            case 'v': case 'V':
                printV(); break;
            case 'w': case 'W':
                printW(); break;
            case 'x': case 'X':
                printX(); break;
            case 'y': case 'Y':
                printY(); break;
            case 'z': case 'Z':
                printZ(); break;
            default: break;
    }
  }
}

void printA()
{
    cout << "    A" << endl;
    cout << "   A A" << endl;
    cout << "  A   A" << endl;
    cout << " AAAAAAA" << endl;
    cout << " A     A" << endl;
    cout << endl;
}

void printB()
{
    cout << " BBBBB" << endl;
    cout << " B    B" << endl;
    cout << " BBBBB" << endl;
    cout << " B    B" << endl;
    cout << " BBBBB" << endl;
    cout << endl;
}

void printC()
{
    cout << "   CCCC" << endl;
    cout << "  CC" << endl;
    cout << " CC" << endl;
    cout << "  CC" << endl;
    cout << "   CCCC" << endl;
    cout << endl;
}

void printD()
{
    cout << " DDDD" << endl;
    cout << " D   D" << endl;
    cout << " D    D" << endl;
    cout << " D   D " << endl;
    cout << " DDDD" << endl;
    cout << endl;
}

void printE()
{
    cout << " EEEEE" << endl;
    cout << " E" << endl;
    cout << " EEE" << endl;
    cout << " E" << endl;
    cout << " EEEEE" << endl;
    cout << endl;
}

void printF()
{
    cout << " FFFFF" << endl;
    cout << " F" << endl;
    cout << " FFF" << endl;
    cout << " F" << endl;
    cout << " F" << endl;
    cout << endl;
}

void printG()
{
    cout << "  GGGG" << endl;
    cout << " G" << endl;
    cout << " G  GG" << endl;
    cout << " G   G" << endl;
    cout << "  GGG" << endl;
    cout << endl;
}

void printH()
{
    cout << " H   H" << endl;
    cout << " H   H" << endl;
    cout << " HHHHH" << endl;
    cout << " H   H" << endl;
    cout << " H   H" << endl;
    cout << endl;
}

void printI()
{
    cout << " III" << endl;
    cout << "  I" << endl;
    cout << "  I" << endl;
    cout << "  I" << endl;
    cout << " III" << endl;
    cout << endl;
}

void printJ()
{
    cout << "     J" << endl;
    cout << "     J" << endl;
    cout << "     J" << endl;
    cout << "     J" << endl;
    cout << " J   J" << endl;
    cout << "  JJJ" << endl;
    cout << endl;
}

void printK()
{
    cout << " K  K" << endl;
    cout << " K K" << endl;
    cout << " KK" << endl;
    cout << " K K" << endl;
    cout << " K  K" << endl;
    cout << endl;
}

void printL()
{
    cout << " L" << endl;
    cout << " L" << endl;
    cout << " L" << endl;
    cout << " L" << endl;
    cout << " LLLLL" << endl;
    cout << endl;
}

void printM()
{
    cout << " M   M" << endl;
    cout << " MM MM" << endl;
    cout << " M M M" << endl;
    cout << " M   M" << endl;
    cout << " M   M" << endl;
    cout << endl;
}

void printN()
{
    cout << " N   N" << endl;
    cout << " NN  N" << endl;
    cout << " N N N" << endl;
    cout << " N  NN" << endl;
    cout << " N   N" << endl;
    cout << endl;
}

void printO()
{
    cout << "  OOO" << endl;
    cout << " O   O" << endl;
    cout << " O   O" << endl;
    cout << " O   O" << endl;
    cout << "  OOO" << endl;
    cout << endl;
}

void printP()
{
    cout << " PPP" << endl;
    cout << " P  P" << endl;
    cout << " PPP" << endl;
    cout << " P" << endl;
    cout << " P" << endl;
    cout << endl;
}

void printQ()
{
    cout << "  OOO" << endl;
    cout << " O   O" << endl;
    cout << " O  OO" << endl;
    cout << " O   O" << endl;
    cout << "  OOO O" << endl;
    cout << endl;

}

void printR()
{
    cout << " RRRR" << endl;
    cout << " R   R" << endl;
    cout << " RRRR" << endl;
    cout << " R  R" << endl;
    cout << " R   R" << endl;
    cout << endl;
}

void printS()
{
    cout << "  SSSS" << endl;
    cout << " S" << endl;
    cout << "  SSS" << endl;
    cout << "     S" << endl;
    cout << " SSSS" << endl;
    cout << endl;
}

void printT()
{
    cout << " TTTTT" << endl;
    cout << "   T" << endl;
    cout << "   T" << endl;
    cout << "   T" << endl;
    cout << "   T" << endl;
    cout << endl;
}

void printU()
{
    cout << " U   U" << endl;
    cout << " U   U" << endl;
    cout << " U   U" << endl;
    cout << " U   U" << endl;
    cout << "  UUU" << endl;
    cout << endl;
}

void printV()
{
    cout << "V       V" << endl;
    cout << " V     V" << endl;
    cout << "  V   V" << endl;
    cout << "   V V" << endl;
    cout << "    V" << endl;
    cout << endl;
}

void printW()
{
    cout << " W   W" << endl;
    cout << " W   W" << endl;
    cout << " W   W" << endl;
    cout << " W W W" << endl;
    cout << " W   W" << endl;
    cout << endl;
}

void printX()
{
    cout << " X   X" << endl;
    cout << "  X X" << endl;
    cout << "   X" << endl;
    cout << "  X X" << endl;
    cout << " X   X" << endl;
    cout << endl;
}

void printY()
{
    cout << " Y   Y " << endl;
    cout << "  Y Y " << endl;
    cout << "   Y " << endl;
    cout << "   Y " << endl;
    cout << "   Y " << endl;
    cout << endl;
}

void printZ()
{
    cout << " ZZZZZ" << endl;
    cout << "    Z" << endl;
    cout << "   Z" << endl;
    cout << "  Z" << endl;
    cout << " ZZZZZ" << endl;
    cout << endl;
}