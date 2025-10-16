#include<iostream>
using namespace std;

class Person{
    public:
    string name;
    int age;
    void display(){
        cout << "Name        : " << name << endl;
        cout << "Age         : " << age << endl;
    }
};

class Student : public Person{
    public:
    int rollNum;
    void showDetails(){
        cout << "Roll_number : " << rollNum << endl;
    }
};

int main(){
    Student s1;
    cout << "Enter name of the student : ";
    cin >> s1.name;
    cout << "Enter Age of the Student  : ";
    cin >> s1.age;
    cout << "Enter Roll Number : ";
    cin >> s1.rollNum;
    cout << endl;
    s1.display();
    s1.showDetails();
    return 0;
}
