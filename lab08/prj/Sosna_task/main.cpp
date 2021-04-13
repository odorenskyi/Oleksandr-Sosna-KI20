#include <iostream>
#include "MyDevInfo.h"
#include <windows.h>
#include <locale.h>
#include  <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    cout << "Sosna Oleksandr. CNTU 2021. (c)" << endl;
    setlocale(LC_ALL, "Ukr");

    int x, y, z;
    float S;
    char a, b;
    int result;

    do {cout << "¬ведiть значенн€ x: ";
    cin >> x;
    cout << "¬ведiть значенн€ y: ";
    cin >> y;
    do {cout << "¬ведiть значенн€ z: ";
    cin >> z;
    if (z < 0)
        cout << "z не може бути меньше 0 " << endl;
    }while (z < 0);
    if (((y+4*((x*x*x) + cos(z))) ==0))
        cout << "¬ведений неправильний набiр даних" << endl;
    }while ((y+4*((x*x*x) + cos(z))) ==0);
    cout << "¬ведiть значенн€ a: ";
    cin >> a;
    cout << "¬ведiть значенн€ b: ";
    cin >> b;
    if(a + 1 < b)
    {
        result = 1;
    }
    else{
        result = 0;
    }
    cout << "Result: " << result;
    cout << " «наченн€ х у дес€тковiй системi = " << dec << x << endl;
    cout << " «наченн€ x у шiстнадц€тковiй  системi = " << hex << x << endl;
    cout << " «наченн€ y у дес€тковiй системi = " << dec << y << endl;
    cout << " «наченн€ y у шiстнадц€тковiй  системi = " << hex << y << endl;
    cout << " «наченн€ z у дес€тковiй системi = " << dec << z << endl;
    cout << " «наченн€ z у шiстнадц€тковiй  системi = " << hex << z << endl;
    S = s_calculation(x, y, z);
    cout << "\n S = " << s_calculation(x, y, z) << endl;
    system("pause");
    return 0;
}
