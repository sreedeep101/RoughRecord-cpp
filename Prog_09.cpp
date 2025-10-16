#include<iostream>
using namespace std;

class Matrix{
    int data[3][3];
    public:
    void input(){
    int i, j;
        cout << "enter elements into the matrix :" << endl;
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                cout << "enter element [" << i << "," << j << "] : ";
                cin >> data[i][j];
            }
        }
    }
    
    void print(){
        int i, j;
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                cout << data[i][j] << " " ;
            }
            cout << endl;
        }
    }
    
    Matrix operator+(Matrix M){
        int i, j;
        Matrix temp;
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                temp.data[i][j] = data[i][j]+M.data[i][j];
            }
        }
        return temp;
    }
};

int main(){
    Matrix m1,m2,add;
    m1.input();
    cout << endl;
    m2.input();
    
    add=m1+m2;
    cout << "The first matrix is :" << endl;
    m1.print();
    cout << "The second matrix is :" << endl;
    m2.print();
    cout << "The added matrix is :" << endl;
    add.print();
    return 0;
}
