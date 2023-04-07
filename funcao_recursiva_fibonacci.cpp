#include <iostream>
#include <cstdio>

using namespace std;

int fibonacci(int num, int fibo=0, int atual=1, int anterior=0, int cont=0){

    if(cont<num){
        printf("%d ", fibo);
        fibo = anterior + atual;
        atual = anterior;
        anterior = fibo;
        cont++;
        fibonacci(num, fibo, atual, anterior, cont);
    }

    return 0;
}

int main(){

    int num=0;
    cin >> num;
    fibonacci(num);


}