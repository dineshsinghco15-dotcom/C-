#include<iostream>
using namespace std;
int main()
{
    int marks=90;
    if(marks>90)
    {
        cout<<"A+";
    }
    else if(marks>80 && marks<91){
        cout<<"B";
    }
    else if(marks>70 && marks<81){
        cout<<"C";
    }
    else if(marks>60 && marks<71){
        cout<<"D";
    }
    else if(marks>50){
        cout<<"E";
    }
    else{
        cout<<"fail";
    }
    return 0;
}