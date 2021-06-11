#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;


int main(int argc, const char** argv) {
    int numero, atual=1,f=1;

    cout << "Digite um numero" << endl;
    cin >> numero;

    while(atual <= numero){
        f = f*atual;
        atual++;
    }
    cout << f;
    return 0;
}