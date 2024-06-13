#include <bits/stdc++.h>
using namespace std;


class Hero { 

    //properties
    public:
        int health;
        char *name;
        char level;
        static int num;


    // Default constructor
    Hero() {
        name = new char[100];
        cout << "Constructor is called" << endl;
    }

    // Parameterised constructor
    Hero(int health) {
        this->health = health;
    }


    Hero(int health, char level) {
        this->level = level;
        this->health = health;
    }

    // Copy constructor 
    Hero(Hero& temp) {
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "Copy constructor is called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    // Destructor
    ~Hero() {
        cout << "Destructor is called" << endl;
    }
    

    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }

    void setName(char name[]) {
        strcpy(this->name, name);
    }

    void print(){
        cout << endl;
        cout << "[ Name: " << this->name<< " ,";
        cout << "health: " << this->health << " ,";
        cout <<"level: " << this->level << " ]";
        cout << endl << endl;
    }

};

int Hero :: num = 7;

int main() {

    cout << Hero::num << endl;


    // static allocation
    // Hero a;

    // // dynamic allocation
    // Hero *b = new Hero;
    // delete b;


    // const int x = 10;
    
    // creation of object
    //static

    // Hero ramesh(10);
    // ramesh.print();
    // // cout << "Address of ramesh -> " << &ramesh << endl;

    // Hero temp(22, 'A');
    // temp.print();

    

    // Hero mansi;
    // mansi.setHealth(10);
    // mansi.setLevel('A');
    // char name[6] = "Mansi";
    // mansi.setName(name);
    // //print
    // //mansi.print();

    // // used default constructor
    // // Hero mansi = nandini;
    // Hero nandini(mansi);
    // //nandini.print();

    // mansi.name[0] = 'N';
    // mansi.print();
    // nandini.print();

    // // Copy assignment operator
    // mansi = nandini;
    // cout << "Copy assignment operator is used " << endl;
    // mansi.print();
    // nandini.print();    


    


    // // setter
    // ramesh.setHealth(70);

    // // getter
    // cout << ramesh.getHealth() << endl;

    // // ramesh.health = 70;
    // ramesh.level = 'A';

    // cout << ramesh.getHealth() << endl;
    // cout << ramesh.level << endl;

    // //cout << "size - " << sizeof(ramesh) << endl;
    return 0;
}