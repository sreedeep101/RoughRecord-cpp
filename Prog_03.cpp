#include<iostream>
using namespace std;

class Rectangle{
    float length;
    float width;
    public: 
    //default constructor
    Rectangle(){
        cout << "object 1 created!" << endl;
        length=0;
        width=0;
    }
    
    //parametrized constructor
    Rectangle(float l, float w){
        cout << "object 2 created!" << endl;
        length=l;
        width=w;
    }
    //member function to display values
    void display(){
        cout << "length : " << length << "     width : " << width << endl;
    }
    
    //distructor
    ~Rectangle(){
        cout << "object is distroyed succesfully!!" << endl;
    }
};

int main(){
    Rectangle obj1;
    Rectangle obj2(8.88,4.0);
    cout << endl;
    obj1.display();
    obj2.display();
    cout << endl;
    return 0;
}
