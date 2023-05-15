class Buy: public Company{
  	private:
  		int b;
  	
	public:
  		string f;  		
	    void select()
  		{
  		   if(gett()=="Mobile")
			{
			    if(getc()=="Samsung" )
				{
				  cout<<"(1)GALAXY S23 Ultra: 256GB storage, 5G suppor, 6.80inch display.\nPrice=$1199.99";
				  cout<<"\n\n(2)GALAXY-Z Fold,  7.6-inch display, 5G support, 512GB storage. \nPrice=>$1899\n";	
				  cout<<"press(0) to pass. \n";
				
				  cin>>b;
				  system("cls");
				  
				  while(b!=0 && b!=1 && b!=2)
					{
					 cout<<"entered number is invalid.\n Enter again! \n";
					 cin>>b;
					}
					if(b==1)
					{
						total+=1199;
						f="GALAXY S23 Ultra: $1199";
						number_of_products++;
					}
					
					else if(b==2)
					{	total+=1899.99; 
					 f="GALAXY-Z Fold: $1899.99";
					 number_of_products++;
					}
					
					else{ total+=0;}
				}	
				
				else if(getc()=="Apple" )
				{
					cout<<"(1)IPHONE-14 Plus: 6.7-inch display, A15 Bionic chip, 128GB storage. \nPrice=$1299.99\n";
					cout<<"\n(2)IPHONE-14:6.1-inch display, A15 Bionic chip, 128GB storage. \nPrice=$1099.99\n";
					cout<<"press(0) to pass. \n";
					cin>>b;
					
					while(b!=0 && b!=1 && b!=2)
					{
					 cout<<"entered number is invalid.\n Enter again! \n";
					 cin>>b;
					}
					
					if(b==1)
					{
						total+=1299.99;
						f="IPHONE-14 Plus: $1299.99";
						number_of_products++;
					}
					
					else if(b==2)
				    {total+=1099.99; 
					 f="IPHONE-14: $1099.99";
					 number_of_products++;
					}
					
					else
					{ 
					  total+=0;
					}
				}
		    }
		  
		  else if(gett()=="Tab")
			{
			    if(getc()=="Samsung")
				{
				   cout<<"(1)GALAXY TAB-S8+: 12.4-inch display, 4G LTE support, 128GB storage. \nPrice=$819.99\n";
				    cout<<"\n(2)GALAXY TAB-S8: 11-inch display, 4G LTE support, 128GB storage. \nPrice=$629.99\n";
				   cout<<"press(0) to pass. \n";	
				   cin>>b;
					
					while(b!=0 && b!=1 && b!=2)
					{
					 cout<<"entered number is invalid.\n Enter again! \n";
					 cin>>b;
					}
					
					if(b==1)
					{
						total+=819.99;
						f="GALAXY TAB-S8+: $819.99";
						number_of_products++;
					}
					
					else if(b==2)
				    {total+=629.99; 
					 f="GALAXY TAB-S8: $629.99";
					 number_of_products++;
					}
					
					else
					{ 
					  total+=0;
					}
				}	
				
				else if(getc()=="Apple")
				{
					cout<<"(1)Ipad-Pro: 12.9inch display, M2 Bionic chip, 128GB storage. \nPrice=$799.99\n";
				    cout<<"\n(2)Ipad-Air: 10.9inch display, M1 Bionic chip, 128GB storage. \nPrice=$599.99\n";
					cout<<"press(0) to pass. \n";
					cin>>b;
				
					while(b!=0 && b!=1 && b!=2)
					{
					 cout<<"entered number is invalid.\n Enter again! \n";
					 cin>>b;
					}
				
					if(b==1)
					{
						total+=799.99;
						f="Ipad-Pro: $799.99";
						number_of_products++;
					}
				
					else if(b==2)
					{
					 total+=599.99;
					 f="Ipad-Air: $599.99";
					 number_of_products++;
					}
					else
					{ 
					 total+=0;
					}
				}
			}
	
			else if(gett()=="Smart-watch")
			{
			    if(getc()=="Samsung")
				{
				  cout<<"(1)GALAXY-WATCH 4 classic: 46mm display, 4G LTE support, 2GB storage. \nPrice=$279.99\n";
				  cout<<"\n(2)GALAXY-WATCH 4: 40mm display, 4G LTE support, 2GB storage. \nPrice=$169.99\n";
				  cout<<"press(0) to pass. \n";
				  cin>>b;
	
					while(b!=0 && b!=1 && b!=2)
					{
					 cout<<"entered number is invalid.\n Enter again! \n";
					 cin>>b;
					}	
	
					if(b==1)
					{
						total+=279.99;
						f="GALAXY-WATCH 4 classic: $2799.99";
						number_of_products++;
					}
	
					else if(b==2)
					{
					 total+=169.99;
					 f="GALAXY-WATCH 4: $169.99";
	                 number_of_products++;
				    }
					
					else
					{ 
					 total+=0;
					}
				}	
				
				else if(getc()=="Apple")
				{
					cout<<"(1)APPLE-WATCH series 8 Ultra: 42mm display, A11 Bionic chip, 1.6GB storage. \nPrice=$799.99\n";
					cout<<"(2)APPLE-WATCH series 8: 38mm display, A10 Bionic chip, 1.9GB storage. \nPrice=$399.99\n";
				    cout<<"press(0) to pass. \n";
					
					cin>>b;
				
					while(b!=0 && b!=1 && b!=2)
					{
					 cout<<"entered number is invalid.\nEnter again! \n";
					 cin>>b;
					}
					if(b==1)
					{
						total+=799.99;
						f="APPLE-WATCH series 8 Ultra: $799.99";
						number_of_products++;
					}
				
					else if(b==2)
					{
					 total+=399.99; 
					 f="APPLE-WATCH series 8: $399.99";
					 number_of_products++;
					}
					
					else{ total+=0;}
				}
			}	
				  cout<<"=========================================================\n";
		}
		
		string getf()
		{
		 return f;
		}
		
	void gettotal()
		{
			cout<<"\nYour total bill is: $"<<total;
			time_t now = time(0);
			char* dt = ctime(&now);
			cout <<"\nPurchase Date and Time: " << dt<<endl;
			cout<<"Thankyou for shoping\n";
		}
		/*int rtotal()
		{
			return total;
		}*/
		int get_number_of_products()
		{
			return number_of_products;
		}
		
		void itotal()
		{
			total=0;
			number_of_products=0;
			
		}
	
		int more()
  	{
  		int y=1;
  	   	cout<<"enter (1) if you want to buy another product.\n";
  	   	cin>>y;
		return y;
	}
  };
  class Seller{
  	private:
  		string password="Myshop";
  		
  	public: 
	    string rpass()
		{
		  return password;	
		}	
		
  }; 
 