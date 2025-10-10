#include<iostream>
using namespace std;

class Car{
    string brand;
    string model;
    int year;
    public:
    void read_members(int m){
        cout << "enter details of car " << m << endl;
        cout << "enter brand Name : ";
        cin >> brand;
        cout << "enter model : ";
        cin >> model;
        cout << "enter year : ";
        cin >> year;
        cout << endl;
    }
    
    void display(int k){
        cout << "\nDetails of car " << k << endl;
        cout << "Brand Name : " << brand << endl;
        cout << "Model      : " << model << endl;
        cout << "Year       : " << year << endl;
    }
};

int main(){
    int i, j;
    Car car[3];
    
    for(i=0;i<3;i++){
        car[i].read_members(i+1);
    }
    
    cout << "Details of Car :" << endl;
    for(j=0;j<3;j++){
        car[j].display(j+1);
    }
    return 0;
}
