//1. ask type
//2. ask company
//3. ask product
//4. add product to object array
//5. loop to buy more products
//6. display products bought
//7. display total bill
//8. display time 

#include<iostream>
#include<string>
#include<ctime>

using namespace std;

class Type 
  {
  	private:
	  string t;
	  int tp;
	
	public:
  	  static float total;
  	  static int number_of_products;
  	 
	       
		   void gettype()
		   {
		   	cout<<"Enter the type of device you want to  buy --> \n(1)Mobile\n(2)Tab\n(3)smart-watch. \n";
		   	cout<<"---------------------------------------------------------\n";
		   	cin>>tp;
		   }
		   
		      	
		   void checktype()
		   {

	      	while(tp!=1 && tp!=2 && tp!=3)
		   	{
		   		cout<<"enterd number is invalid.\nEnter again!";
		   		cin>>tp;
			}
		}
			
			void settype()
			{
				if(tp==1)
		   	{
		   		t="Mobile";
			}
		   	
			else if(tp==2)
		   	{
		   		t="Tab";
			}
			
		   	else if(tp==3)
		   	{
		   		t="Smart-watch";
			}
				
			}
		
	
	      string gett()
	      {
		   return t; 
		  }
	  
	  virtual void getcompany(){};
      virtual void checkcompany(){};
      virtual void select(){};
      virtual int more(){};
	  virtual void gettotal()=0;
	  virtual void setcompany()=0;
	  virtual string getf()=0;
	  virtual int rtotal(){};
	  virtual int get_number_of_products()=0;
	  virtual void itotal()=0;
	 
	  };
	float Type:: total=0;
	int Type :: number_of_products=0;

class Company: public Type{
	
	    private:
	    	string c;
	    	int comp;
	    	
	    public:
	      
		  void getcompany()
	      {
	      	
	      	cout<<"Which company would you prefer for "<<gett()<<endl<<"\n(1)Samsung\n(2)Apple\n";
	      	cin>>comp;
	      	cout<<"---------------------------------------------------------\n";
		  }
		  
		  void checkcompany()
		   {

	      	 while(comp!=1 && comp!=2)
		   	 {
		   		cout<<"enterd number is invalid.\nEnter again!";
		   		cin>>comp;
			 }
		   
		   }     
			
			void setcompany()
			{
			   if(comp==1)
		   	   {
		   	  	 c="Samsung";
			   }
		   	
			   else if(comp==2)
		   	   {
		   		 c="Apple";
			   }
		   
			}
			
			
		
		   string getc(){ return c;}
  };
  
  