//============================================================================
// Name        : array.cpp
// Author      : Alessandro
// Version     : 1.0
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void scorriV(int x[], int dim1, int dim2, int dim3) {
    for (int i = 0; i < dim3; i++) {
        cout << "v-fetta" << i << endl;
        for (int k = 0; k < dim1 * dim2; k++) {
            cout << *(x + (dim3 * k) + i) << " ";
        }
        cout << endl;
    }
}


void scorriH(int x[], int dim1, int dim2, int dim3) {
    for (int i = 0; i < dim2; i++) {
        cout << "fetta" << i << endl;
        for (int j = 0; j < dim1; j++) {
            cout << "riga" << j << " ";
            for (int k = 0; k < dim3; k++) {
                cout << *(x + k + (j * dim2 * dim3) + (i * dim3)) << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}


void scorriS(int x[], int dim1, int dim2, int dim3) {

    for (int i = 0; i < dim1; i++) {
        cout << "Strato" << i << endl;
        for (int j = 0; j < dim2; j++) {
            cout << "riga" << j << " ";
            for (int k = 0; k < dim3; k++) {
                cout << *(x + (i * dim2 * dim3) + (j * dim3) + k) << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}

int main() {
    cout << "Dammi le dimensioni dell' array:" << endl;
    int i, j, k;
    cin >> i >> j >> k;
    int d = i * j * k;
    int X[d];
    for (int i = 0; i < d; i++) {
        X[i] = i;
    }
    cout << "Scorri S" << endl;
    scorriS(X, i, j, k);
    cout << "Scorri V" << endl;
    scorriV(X, i, j, k);
    cout << "Scorri H" << endl << endl;
    scorriH(X, i, j, k);
}
