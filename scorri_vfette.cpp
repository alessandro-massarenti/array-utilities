//------------------------------------------------------------------
//Questa funzione stampa per fette verticali un array a 3 dimensioni
//------------------------------------------------------------------

// PRE = (dim1 dim2 e dim3 denotano le dimensioni di un array completamente pieno)
void scorriV(int x[],int dim1,int dim2,int dim3){
	
	//PRE=(dim3 è esattamente il numero di elementi in una singola riga)
	for(int i=0;i<dim3; i++){
		cout << "v-fetta" << i << endl;
		//PRE=(dim1 è esattamente il numero di strati, dim2 è esattamente il numero di righe presenti in uno strato)
		for(int k=0;k<dim1*dim2; k++){
			cout << *(x+(dim3*k)+i) << " ";
		}
		//POST=(sono stati scorsi tutti gli elementi di una singola V-fetta)
		cout << endl;
	}
	//POST=(sono state scorse tutte le V-fette dell'intero array)
}
