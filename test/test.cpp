#include <iostream>
using namespace std;
#include "max.h"
#include <ap_int.h>

int main(){
    int a = 5;
    int b = 10;
    ap_int<8> c = 15;
    ap_int<8> d = 20;

    cout<<"Max of "<<c<<" and "<<d<<" is "<<max(c,d)<<endl;
    cout<<"test git update!"<<endl;
    return 0;

} 