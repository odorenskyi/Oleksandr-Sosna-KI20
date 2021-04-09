#include <iostream>
#include <windows.h>
#include <locale.h>
#include <io.h>
#include <fcntl.h>
#include "MyDevInfo.h"
#include <math.h>
#include <string>


using namespace std;

int main(){
     _setmode(_fileno(stdout), _O_U16TEXT);
    _setmode(_fileno(stdin), _O_U16TEXT);
    _wsetlocale(LC_ALL,L"");
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);



    double testArray[30] ={75,23,29,127.75,79,11,15,35,75,12,38,76,19,18,36,61,18,78,24563,45676,588,66,96,696,599,89,586,13,5,4} ;
    float x,y,z;
    double result = 0;
    wstring mesage;
    for (int i = 0; i < 30; i++){
        switch (i%3) {
        case 0: x = testArray[i];
            break;
        case 1: y = testArray[i];
            break;
        case 2: z = testArray[i];
            result = (z+y+z)*2 - sqrt(abs(2*3.14)*sqrt(0.5*z)/y+4*((x*x*x) + cos(z)));
            if (fabs(result - s_calculation(x,y,z)) < 0.0001){
                mesage = L"passed! ";
            }
            else{
                mesage = L"Fail ";
            }
            wcout << L"Test case # "<< (i-i%3)/3 +1 << L" is " << mesage <<  endl;
            break;
        }

    }
    return 0;
}

