#include<iostream>
#include<string.h>
using namespace std;

class Hero {
private: 
    int health;
    char level;
    char* name;
public: 
    Hero() {
        name= new char[100];
    }
    void setName(char name[]) {
        strcpy(this->name,name);
    }
};

int main() {
    Hero hero1;

    //
}