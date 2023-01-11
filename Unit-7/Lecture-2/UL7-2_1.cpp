#include<iostream>
using namespace std;

class B{
    private :
        int a;
    public  :
        void setData(char d){
            cout <<"Enter the "<< d <<" : ";
            cin  >>a;
        }
        void getData(){
            cout << "A : "<< a << endl;
        }
        bool operator < (B &c){
            if (this -> a < c.a){
                return true;
                }
            else{
                return false;
            }
        }
};
int main(){

    B a,b;
    a.setData('A');
    b.setData('B');

    if(a < b){
        cout <<"B is Maximum number !!";
    }
    else{
        cout <<"A is Maximum number !!";
    }
}


