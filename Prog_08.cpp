#include<iostream>
using namespace std;

class Roll{
    int rollNum;
    public:
    Roll(){
        rollNum = 1;
    }
    
    void display(){
        cout << "Roll NO : " << rollNum << endl;
    }
    
    void operator++(){
        rollNum++;
    }
    
};

int main(){
    Roll obj;
    int i;
    for(i=0;i<10;i++){
        obj.display();
        ++obj;
    }
    return 0;
}
