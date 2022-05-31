#include <iostream >
using namespace std;
template <class Type1 , class Type2> class myclass{
    Type1 i;
    Type2 j;
    public:
    myclass(Type1 a, Type2 b) { i = a; j = b; }
    void show() { cout << i << ' ' << j << endl; }
};

int main(){ 
    myclass <int, double > ob1(10, 0.23);
    myclass <char, char *> ob2('X', "This is a test");
    ob1.show(); // show int, double
    ob2.show(); // show char, char *
    return 0;
}