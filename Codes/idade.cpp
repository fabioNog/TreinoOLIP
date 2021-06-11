#include <iostream>

using namespace std;


int main(int argc, const char** argv) {
    int menor, idade;

    cout << "Informe Idade" << endl;
    cin >> idade;

    if(idade >= 18){
        cout << 2021-idade << endl;
    }
    else{
        cout << idade << endl;
    }

    return 0;
}
