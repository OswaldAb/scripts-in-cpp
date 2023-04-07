#include <iostream>

using namespace std;


int fatorial(int num, int aux, int &total){

    if(aux>1){
    	total*=aux;
        fatorial(num, aux-=1,  total);
    }
    return 0;
}

//--------------

int main(){
    int num=0, total=1;

    cin >> num;

    fatorial(num, num, total);
    
    cout << total << endl;


}
