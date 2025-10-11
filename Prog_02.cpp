#include<iostream>
using namespace std;

class Book{
    string bookId;
    string bookName;
    float bookPrice;
    void totalCost(int n){
        float total= n*bookPrice;
        cout << "Total Price : " << total << endl;
    }
    public:
    void read_members(int m){
        cout << "enter details of book " << m << endl;
        cout << "enter bookID : ";
        cin >> bookId;
        cout << "enter book name : ";
        cin >> bookName;
        cout << "enter price : ";
        cin >> bookPrice;
        cout << endl;
    }
    
    void display(int k){
        int n;
        cout << "\nDetails of book " << k << endl;
        cout << "BookID    : " << bookId << endl;
        cout << "Book Name : " << bookName << endl;
        cout << "Price     : " << bookPrice << endl;
        cout << "enter number of copys You want" << endl;
        cin >> n;
        totalCost(n);
    }
};

int main(){
    int i, j;
    Book book[3];
    
    for(i=0;i<3;i++){
        book[i].read_members(i+1);
    }
    
    cout << "Details of Book:" << endl;
    for(j=0;j<3;j++){
        book[j].display(j+1);
    }
    return 0;
}
