#include<iostream>
using namespace std;

class servo{
    public:
    int degree;
    int servo_speed;
    servo(){

        cout<<"enter the angle of your servo";
        cin>>degree;
        cout<<"enter your servo speed";
        cin>>servo_speed;



    }
    void detail(){
        cout<<"angle of the servo is "<<degree;
        cout<<"speed of the servo is "<<servo_speed;


    }
};
int main(){
    servo s1;
    s1.detail();
    return 0;


}
