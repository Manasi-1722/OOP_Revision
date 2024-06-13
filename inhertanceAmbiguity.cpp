#include <bits/stdc++.h>
using namespace std;


class Man{
    public :
    void abc(){
        cout << "Hello Man" << endl;
    }
};

class Woman{
    public :
    void abc(){
        cout << "Hello Woman" << endl;
    }
};

class People : public Man, public Woman{
    public :

};


int main() {

    People p;

    // :: - Scope resolution operator
    p.Man::abc();
    p.Woman::abc();
    
    return 0;
}