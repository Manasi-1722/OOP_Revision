#include <bits/stdc++.h>
using namespace std;


class Human {
public:
    int height;
    int weight;
    int age;

    int setAge() {
        return this->age;
    }
};

class Male : public Human {
    public:
    string color;

    void sleep() {
        cout << "Male love sex" << endl;
    }

    int getAge() {
        return this->age;
    }
};


/*
====== Types of Inheritance =======

Parent -> Mode  = Remember

public -> public = public
public -> private = private
public-> protected = protected

private -> public = Error
private -> private = Error    
private -> protected = Error

protected -> public = protected
protected -> private = private
protected -> protected = protected

*/

int main() {
    
    Male m;
    m.age = 27;
    m.height = 5;
    m.weight = 70;
    m.color = "Blue";

    cout << m.age << endl;
    cout << m.height << endl;
    cout << m.weight << endl;
    cout << m.color << endl;
    
    cout << m.setAge() << endl;
    m.sleep();


    
    return 0;
}