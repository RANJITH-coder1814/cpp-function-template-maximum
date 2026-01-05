#include<iostream>
using namespace std;
template<class T>
T maxium(T a,T b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    cout<<maxium(5,3)<<endl;
    cout<<maxium(2.4f,3.5f)<<endl;
    return 0;
}