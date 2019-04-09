void scorriSP(int x[],int dim1,int dim2,int dim3){
	
	//PRE=(dim1 è esattamente il numero di strati)
	for(int i=0;i<dim1; i++){
		cout << "Strato" << i << endl;
		//PRE=(dim2 è esattamente il numero di righe presenti in uno strato)
		for(int j=0;j<dim2; j++){
			cout << "riga" << j << " ";
			//PRE=(dim3 è esattamente il numero di elementi in una singola riga)
			for(int k=0;k<dim3; k++){
				cout << *(x+(i*dim2*dim3)+(j*dim3)+k) << " ";
			}
			//POST=(sono stati scorsi tutti gli elementi di una singola riga indicata dall'indice j, k=dim3)
			cout << endl;
		}
		//POST=(sono state scorse tutte le righe di uno strato indicato dall'indice i, j=dim2)
		cout << endl;
	}
	//POST=(sono stati scorsi tutti gli strati indicati da dim1, i=dim1)
}
