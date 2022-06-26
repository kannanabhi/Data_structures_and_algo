#include<iostream>
using namespace std;

class Human {
private: 
    int height;
    int weight;
    int age=10;

public:
    int getAge() {
        return age;
    }
    int setWeight(int w) {
        this->weight=w;
    }
    int getHeight() {
        return this->height;
    }
    int setHeight(int height) {
        this->height=height;
    }
};

class Male: public Human {
    private:
    string color;
    public :
    void sleep()  {
        cout<<"Male sleeping"<<endl;
    }

};

int main() {
    Male m1;
    // int value=m1.getAge;
    m1.setHeight(40);
    cout<<m1.getHeight()<<endl;

    return 0;
}