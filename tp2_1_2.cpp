#include <iostream>
using namespace std;

#define N 20
int i;
double vt[N];

int main(){
    for ( i = 0; i < N; i++) {
        *(vt + i) = 1 + rand() % 100;
        cout << *(vt + i);
    }

}

