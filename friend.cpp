#include <bits/stdc++.h>
using namespace std;

/* Friend function -  a function that is not a member of a class but has 
                      access to its private and protected members.  */

class Box {
    private:
    int length;
    int width;

    public:

    // Constructor
    Box(int l, int w){
        this->length = l;
        this->width = w;
    }

    // friend function
    friend int area(Box& b);
};

// defination of friend function
int area(Box& b) {
    return b.length * b.width;
}


int main() {
    
    Box b(5, 10);
    cout << area(b) << endl;

    return 0;
}