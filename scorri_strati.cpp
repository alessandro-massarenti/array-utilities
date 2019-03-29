void scorriSP(int x[],int dim1,int dim2,int dim3){

	for(int i=0;i<dim1; i++){
		cout << "Strato" << i << endl;
		for(int j=0;j<dim2; j++){
			cout << "riga" << j << " ";
			for(int k=0;k<dim3; k++){
				cout << *(x+(i*dim2*dim3)+(j*dim3)+k) << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
}
