
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

#define STRING(num) STR(num)
#define STR(num) #num

int main() {

    string texto,s1,s2,soma,subtracao;
    s1 = s2 = "";
    char x;
    int b;
    
    cin >> texto;
    for(int i=0;i<texto.size();i++){
        if(texto[i] == '7'){
            texto[i] = '0';
            s1 = s1 + texto[i];
        }
        else if((texto[i] != '+') || (texto[i] != '*')){
            s1 = s1 + texto[i];
        }
        else {
            x = texto[i];
            b = i+1;
            continue;
        }
    }
    
    

    for(int i=b;i<texto.size();i++){
        if(texto[i] == '7'){
            texto[i] = '0';
            s2 = s2 + texto[i];
        }
        s2 = s2 + texto[i];
    }

    string string_r;
    string_r = to_string(r);



    for(int i=0;i<string_r.size();i++){
        if(string_r[i] == '7'){
            string_r[i] = '0';
        }
    }
    

    r = stoi(string_r);
    cout << r;

    return EXIT_SUCCESS;
}