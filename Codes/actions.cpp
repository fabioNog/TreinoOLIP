#include <iostream>


using namespace std;

int main(){

    int D,F,X,I;
    

    cout << "Digite D" << endl;
    cin >> D;

    cout << "Digite I" << endl;
    cin >> I;

    cout << "Digite X" << endl;
    cin >> X;

    cout << "Digite F" << endl;
    cin >> F;
    

    while(D <=0 || D > 365 ){
        cin >> D;
    }

    while(I <=1000){
        cin >> I;
    }

    while(F <=0 || F > 365 ){
        cin >> F;
    }

    for(int i=0; i < F; i++ )

    if((D % 2) == 0){        
        I = I - X;
        D = D+1;
        
    }    
    else{
        I = I + X;
        D = D+1; 
    }


    cout << I << endl;


    return 0;
}