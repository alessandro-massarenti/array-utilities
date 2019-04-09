void scorriH(int x[], int dim1, int dim2, int dim3) {
    for (int i = 0; i < dim2; i++) {
        cout << "fetta" << i << endl;
        for (int j = 0; j < dim1; j++) {
            cout << "riga" << j << " ";
            for (int k = 0; k < dim3; k++) {
                cout << *(x + k + (j * dim2 * dim3) + (i * dim3)) << " ";
            }
            //POST : Viene scorsa la riga della fetta
            cout << endl;
        }
        cout << endl;
    }
}
