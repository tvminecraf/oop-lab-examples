// This program is fixed.
#include <iostream >
using namespace std;
class base{
    int x;
    public:
    void setx(int n) { x = n; }
    void showx() { cout << x << endl; }
};

class derived : private base{
    int y;
    public: 
    void setxy(int n, int m) { setx(n); y = m; } // setx is accessible from within derived 
    void showxy() { showx(); cout << y << endl; }// show is accessible from within derived
};

int main(){
    derived ob;
    ob.setxy(10, 20);
    ob.showxy();
    return 0;
}