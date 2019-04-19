int Kadane(int *a, int size) 
{
   int last_max = -200000, cur_max = 0;
   for(int i = 0; i<size;i++)
   {

       cur_max+=a[i];
       if(last_max<cur_max)
       {

           last_max=cur_max;

       }
       if(cur_max<0) cur_max = 0;

   }

    return(last_max);


}
void fillarray(int *a,int size) //fills the array with a random number between 1-100, with a 40% chance of that number being positive
{
    for(int i = 0;i<size;i++)
    {int ch=rand() % 100;
         if(ch<40)  a[i] = rand()%100;
         else a[i] = -rand()%100;
    }


}

//this is just to test the algorithm
int main()
{
    srand(time(NULL));
    cout<<"Insert a size for the array"<<endl;
    int size;
    cin>>size;
    int A[size];
    fillarray(A,size);
    cout<<"original array"<<endl;
    for(int i=0; i < size;i++)
    {
        cout<<A[i]<<" ";

    }
 
    int max = Kadane(A,size);
cout<<endl<<"maximum subarray sum is: "<<max<<endl;
return 0;
}
