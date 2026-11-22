#include <iostream>
using namespace std;
int main()
{
int n[5],count=0;
    cout<<"Enter five number: ";
    for(int i=0;i<5;i++){
        cin>>n[i];
    }
    for(int i=0;i<5;i++){
        if(n[i]%2==0){
            count++;
        }
    }
    cout<<"Even number are: "<<count;
    return 0;
}