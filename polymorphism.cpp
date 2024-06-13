#include <bits/stdc++.h>
using namespace std;

// *** Compile-time Polymorphism ***
class A {
    public:

    // Function Overloading :-
    // Same function name but with different 
    // 1. number of arguments 
    // 2. types of arguments 
    // 3. default arguments

    void sayHello() {
        cout << "Hello Mansi" << endl;
    }

    int sayHello(int n) {
        cout << n << endl;
        return n;
    }

    void sayHello(string name) {
        cout << "Hello " << name << endl;
    }
};



class B {
    public:
    int a;
    int b;
    // Operator overloading
    void add() {
        cout << "Sum is " << a + b << endl;
    }

    void operator+ (B &obj) {
        int value1 = this->a;
        int value2 = obj.a;
        cout << "Sum is " << value1 - value2 << endl;
    }   

    void operator() (){
        cout << "Bracket operator called" << endl;
    }
};


// *** Run-time Polymorphism ***
class Animal {
    public:
    void speak() {
        cout << "Speaking" << endl;
    }
};

// Run time polymorphism is impossible without inheritance
class Dog : public Animal {
    public:
    void speak() {
        cout << "Barking" << endl;
    }
};


int main() {

    // A obj;
    // obj.sayHello();
    // obj.sayHello("Akshata");
    // obj.sayHello(7);

    // B obj1, obj2;

    // obj1.a = 7;
    // obj2.a = 4;

    // obj1 + obj2;
    // obj1();





    Dog d;
    d.speak();
    

    
    return 0;
}