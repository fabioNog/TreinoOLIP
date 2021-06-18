#include <iostream>
#include <iomanip>

using namespace std;


int main(int argc, const char** argv) {
    cout << std::fixed << std::setprecision(2);
    int NUMBER, hora_trab;
    double SALARY,valor_hora;

    cin >> NUMBER;
    cin >> hora_trab;
    cin >> valor_hora;
    
    SALARY = hora_trab*valor_hora;

    cout << "NUMBER = " << NUMBER << endl;
    cout << "SALARY = U$ " << SALARY  << endl; 

    return 0;
}
