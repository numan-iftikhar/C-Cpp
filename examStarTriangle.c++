#include <iostream>
using namespace std;

int main(){
    int a, b;

    for (int a = 0; a < 5; a++)
    {
        for (int b = 0; b < a; b++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    
    return 0;
}