#include <bits/stdc++.h>
using namespace std;


class Animal {
    public:
    int age;
    int height;

    void speak() {
        cout << "Speaking" << endl;
    }
};

class Dog {

    public:
    void bark() {
        cout << "Barking" << endl;
    }

};


// Single Inheritance 
// class Dog : public Animal {...}


// Multiple Inheritance
class GoldenRetriver : public Animal, public Dog {

};

// Multilevel Inheritance 

class Cat : public Animal{
    public:
    void meow(){
        cout << "Meowing" << endl;
    }
};


class PersianCat : public Cat {

};


// Hierarchical Inheritance

// class A{
//     public:
//     void a(){
//         cout << "Inside A" << endl;
//     }
// };

// class B : public A{
//     public:
//     void b(){
//         cout << "Inside B" << endl;
//     }
// };

// class C : public A{
//     public:
//     void c(){
//         cout << "Inside C" << endl;
//     }
// };



// Hybrid Inheritance - hierarchical + multiple

class A{
    public:
    void a(){
        cout << "Inside A" << endl;
    }
};

class D{
    public:
    void d(){
        cout << "Inside D" << endl;
    }
};

class B : public A{
    public:
    void b(){
        cout << "Inside B" << endl;
    }
};

class C : public A, public D{
    public:
    void c(){
        cout << "Inside C" << endl;
    }
};


int main() {
    
    GoldenRetriver gd;
    gd.speak();
    gd.bark();

    PersianCat pc;
    pc.meow();
    pc.speak();

    // Hierarchical 
    // A obj1;
    // obj1.a();

    // B obj2;
    // obj2.a();
    // obj2.b();

    // C obj3;
    // obj3.a();
    // obj3.c();


    // Hybrid 
    A obj1;
    obj1.a();

    B obj2;
    obj2.a();
    obj2.b();

    C obj3;
    obj3.a();
    obj3.c();
    obj3.d();





    return 0;
}