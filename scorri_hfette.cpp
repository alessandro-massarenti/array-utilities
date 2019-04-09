void scorriH(int x[], int dim1, int dim2, int dim3) {     //works if the array is completely filled
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

void PrintHAlt(int * x,int n_ele, int dim2,int dim3)
{
    int z = n_ele/(dim2*dim3); //find how many z levels are filled
    int Unfilled_elements = n_ele%(dim2*dim3); //find how many elements are in the last z level
    int last_level_rows = Unfilled_elements / dim3;
    int spare = Unfilled_elements % dim3;
    for (int i = 0 ; i<dim2;i++)
    {
       int El = dim3*z;
       if(i<last_level_rows) El+=dim3;
       if(i==last_level_rows) El+=spare;
        cout<<"slice "<< i <<endl;
        for(int c = 0 ; c<El;c++)
        {
            if((c%dim3)==0) cout<<"row "<< c/dim3<<": ";
        cout<< x[i*dim3+(c/dim3)*(dim2*dim3)+c%dim3]<<" ";
            if((c%dim3)==dim3-1) cout<<endl;
        }
cout<<endl;
    }
