int main()
{
	int p=0;
	Seller sold;
	string soldp[20];
	for(int i=0; i<20; i++)
	{
		soldp[i]="";
	}
	
	string products[20];
	int n,c=1;
	while(c==1)
	{
	cout<<"                  welcome to our shop.\n";
	cout<<" Enter 1 if you want to buy a product or Enter 2 if you shop owner ";
	cout<<"\n-------------------------------------------------------------------\n";
	cin>>n;
	system("cls");
	
	
	if(n==1)
  {
  	for(int i=0; i<20; i++)
	{
		products[i]="";
	}
	Type *num = new Buy[20];
  	num->itotal();
	
	for(int i=0; i<n; i++)
	{
	  //(*num).gettype();
	  num->gettype();
	  num->checktype();
	  num->settype();
	  num->getcompany();
	  num->checkcompany();
      num->setcompany();
      cout<<"The availible products and their feature are:\n\n";
	  num->select();
	 	
	  products[i]=num->getf();
	
	 if( num->more()==1)
	 {
	 	n++;
	 	system("cls");
	 	//num++;
	 }
	  