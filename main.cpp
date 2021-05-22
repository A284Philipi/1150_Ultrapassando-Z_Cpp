#include <iostream>

using namespace std;

int main()
{
    int x, z = -99999999, total, soma = 0;
    cin >> x;
    while (z <= x){
        cin >> z;
    }
    soma = x;
    total = 1;
    while (soma < z){
        soma = soma + x + total;
        total++;
    }
    cout << total <<endl;
    return 0;
}
