#include <iostream>

using namespace std;


int fatorial(int num, int aux, int &total){


    fatorial(num, aux-=1,  total);
}

//--------------

int main(){
    int num=0, total=1;

    cin >> num;

    fatorial(num, num, total);


}