#include<iostream>
using namespace std;
int main()
{
	char name[25],pizza1[]="Margherita pizza",pizza2[]="chees pizza",pizza3[]="Garlic bread",pizza4[]="xyz";
	char bur1[]="veg burger",bur2[]="cheese burger",bur3[]="double cheese burger",bur4[]="fritz burger";
	char sand1[]="chees sandwich",sand2[]="veg sandwich",sand3[]="club sandwich",sand4[]="crispy bacon";
	char Roll1[]="spring roll",Roll2[]="cheese roll",Roll3[]="veg spring roll",Roll4[]="bread roll";
	char bir1[]="prawn biryani",bir2[]="beef biryani",bir3[]="mughlai biryani",bir4[]="lucknowi biryani",gotostart;
	
	int choice=0,choice1,choice2,choice3,choice4,choice5,quantity;
	beginning:
		system("CLS");
		cout<<"\t\t\t----------------Tops Tech.Fast Food-----------------\n\n";
		cout<<"Please Enter your name\n";
		cin>>name;
		cout<<"Hello   "<<name<<endl;
		cout<<"\nWhat would you like to order?\n\n";
		
		cout<<"\t\t\t\t----------Menu------------\n";
		cout<<"1)  Pizzas\n";
		cout<<"2)  Burgers\n";
		cout<<"3)  Sandwich\n";
		cout<<"4)  Rolls\n";
		cout<<"5)  Biryani\n";
		
		cout<<"Please Enter Your Choice";      
		cin>>choice;
		
		if(choice==1)
		{
			cout<<"\n1) "<<pizza1<<"  Rs.200"<<endl;
			cout<<"\n2) "<<pizza2<<"  Rs.250"<<endl;
			cout<<"\n3) "<<pizza3<<"  Rs.150"<<endl;
			cout<<"\n4) "<<pizza4<<"  Rs.280"<<endl;
			cout<<"\n Please Enter Which pizza Would You Like To Have?:\n";
			cin>>choice1;
			if(choice>=1 && choice<=4)
			cout<<"Enter your quantity\n";
			cin>>quantity;
			switch(choice1)
			{
				case 1:
					choice = 200*quantity;
					cout<<"\t\t\t--------Your Order---------\n";
                    cout<<""<<quantity<<" "<<pizza1;
                    cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
                    cout<<"\n\nThank you For Ordering FromTops Tech. Fast Food\n";
                    break;
                case 2:
                	choice = 250*quantity;
					cout<<"\t\t\t--------Your Order---------\n";
                    cout<<""<<quantity<<" "<<pizza2;
                    cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
                    cout<<"\n\nThank you For Ordering FromTops Tech. Fast Food\n";
                    break;
                case 3:
					choice = 150*quantity;
					cout<<"\t\t\t--------Your Order---------\n";
                    cout<<""<<quantity<<" "<<pizza3;
                    cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
                    cout<<"\n\nThank you For Ordering FromTops Tech. Fast Food\n";
                    break;
                    
                case 4:
					choice = 280*quantity;
					cout<<"\t\t\t--------Your Order---------\n";
                    cout<<""<<quantity<<" "<<pizza4;
                    cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
                    cout<<"\n\nThank you For Ordering FromTops Tech. Fast Food\n";
					break;
					
					
				
						
			}
			cout<<"Would you like to order anything else? Y / N:";
            cin>>gotostart;
            if(gotostart=='Y' || gotostart=='y')
            {
              goto beginning;
              //return 0;
            }
		}
		
			else if(choice==2)
		    {
				cout<<"\n1) "<<bur1<<"  Rs.100"<<endl;
			    cout<<"\n2) "<<bur2<<"  Rs.150"<<endl;
			    cout<<"\n3) "<<bur3<<"  Rs.140"<<endl;
			    cout<<"\n4) "<<bur4<<"  Rs.180"<<endl;
			    cout<<"\n Please Enter Which burger Would You Like To Have?:\n";
			    cin>>choice2;
			    if(choice>=2  && choice<=4)
			        cout<<"Enter your quantity\n";
			        cin>>quantity;	
			
			
			switch(choice1)
			{
				case 1:
					choice2 = 100*quantity;
					cout<<"\t\t\t--------Your Order---------\n";
                    cout<<""<<quantity<<" "<<bur1;
                    cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
                    cout<<"\n\nThank you For Ordering FromTops Tech. Fast Food\n";
                    break;
                case 2:
                	choice2 = 150*quantity;
					cout<<"\t\t\t--------Your Order---------\n";
                    cout<<""<<quantity<<" "<<bur2;
                    cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
                    cout<<"\n\nThank you For Ordering FromTops Tech. Fast Food\n";
                    break;
                case 3:
					choice2 = 140*quantity;
					cout<<"\t\t\t--------Your Order---------\n";
                    cout<<""<<quantity<<" "<<bur3;
                    cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
                    cout<<"\n\nThank you For Ordering FromTops Tech. Fast Food\n";
                    break;
                    
                case 4:
					choice2 = 180*quantity;
					cout<<"\t\t\t--------Your Order---------\n";
                    cout<<""<<quantity<<" "<<bur4;
                    cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
                    cout<<"\n\nThank you For Ordering FromTops Tech. Fast Food\n";
					break;	
			}
			cout<<"Would you like to order anything else? Y / N:";
            cin>>gotostart;
            if(gotostart=='Y' || gotostart=='y')
            {
              goto beginning;
              //return 0;
            }
}
			else if(choice==3)
		    {
				cout<<"\n1) "<<sand1<<"  Rs.80"<<endl;
			    cout<<"\n2) "<<sand2<<"  Rs.100"<<endl;
			    cout<<"\n3) "<<sand3<<"  Rs.120"<<endl;
			    cout<<"\n4) "<<sand4<<"  Rs.170"<<endl;
			    cout<<"\n Please Enter Which sandwich Would You Like To Have?:\n";
			    cin>>choice3;
			    if(choice>=1  && choice<=4)
			        cout<<"Enter your quantity\n";
			        cin>>quantity;
			switch(choice3)
			{
				case 1:
					choice = 80*quantity;
					cout<<"\t\t\t--------Your Order---------\n";
                    cout<<""<<quantity<<" "<<sand1;
                    cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
                    cout<<"\n\nThank you For Ordering FromTops Tech. Fast Food\n";
                    break;
                case 2:
                	choice = 100*quantity;
					cout<<"\t\t\t--------Your Order---------\n";
                    cout<<""<<quantity<<" "<<sand2;
                    cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
                    cout<<"\n\nThank you For Ordering FromTops Tech. Fast Food\n";
                    break;
                case 3:
					choice = 120*quantity;
					cout<<"\t\t\t--------Your Order---------\n";
                    cout<<""<<quantity<<" "<<sand3;
                    cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
                    cout<<"\n\nThank you For Ordering FromTops Tech. Fast Food\n";
                    break;
                    
                case 4:
					choice = 170*quantity;
					cout<<"\t\t\t--------Your Order---------\n";
                    cout<<""<<quantity<<" "<<sand4;
                    cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
                    cout<<"\n\nThank you For Ordering FromTops Tech. Fast Food\n";
					break;	
			}
			cout<<"Would you like to order anything else? Y / N:";
            cin>>gotostart;
            if(gotostart=='Y' || gotostart=='y')
            {
              goto beginning;
              //return 0;
            }
		}
			else if(choice==4)
		    {
				cout<<"\n1) "<<Roll1<<"  Rs.10"<<endl;
			    cout<<"\n2) "<<Roll2<<"  Rs.15"<<endl;
			    cout<<"\n3) "<<Roll3<<"  Rs.14"<<endl;
			    cout<<"\n4) "<<Roll4<<"  Rs.18"<<endl;
			    cout<<"\n Please Enter Which rolls Would You Like To Have?:\n";
			    cin>>choice4;
			    if(choice>=1  && choice<=4)
			        cout<<"Enter your quantity\n";
			        cin>>quantity;
			switch(choice4)
			{
				case 1:
					choice = 10*quantity;
					cout<<"\t\t\t--------Your Order---------\n";
                    cout<<""<<quantity<<" "<<Roll1;
                    cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
                    cout<<"\n\nThank you For Ordering FromTops Tech. Fast Food\n";
                    break;
                case 2:
                	choice = 15*quantity;
					cout<<"\t\t\t--------Your Order---------\n";
                    cout<<""<<quantity<<" "<<Roll2;
                    cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
                    cout<<"\n\nThank you For Ordering FromTops Tech. Fast Food\n";
                    break;
                case 3:
					choice = 14*quantity;
					cout<<"\t\t\t--------Your Order---------\n";
                    cout<<""<<quantity<<" "<<Roll3;
                    cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
                    cout<<"\n\nThank you For Ordering FromTops Tech. Fast Food\n";
                    break;
                    
                case 4:
					choice = 18*quantity;
					cout<<"\t\t\t--------Your Order---------\n";
                    cout<<""<<quantity<<" "<<Roll4;
                    cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
                    cout<<"\n\nThank you For Ordering FromTops Tech. Fast Food\n";
					break;	
			}
			cout<<"Would you like to order anything else? Y / N:";
            cin>>gotostart;
            if(gotostart=='Y' || gotostart=='y')
            {
              goto beginning;
              //return 0;
            }
		}
			else if(choice==5)
		    {
				cout<<"\n1) "<<bir1<<"  Rs.150"<<endl;
			    cout<<"\n2) "<<bir2<<"  Rs.180"<<endl;
			    cout<<"\n3) "<<bir3<<"  Rs.150"<<endl;
			    cout<<"\n4) "<<bir4<<"  Rs.170"<<endl;
			    cout<<"\n Please Enter Which biryani Would You Like To Have?:\n";
			    cin>>choice5;
			    if(choice>=1  && choice<=4)
			        cout<<"Enter your quantity\n";
			        cin>>quantity;
			switch(choice5)
			{
				case 1:
					choice =150*quantity;
					cout<<"\t\t\t--------Your Order---------\n";
                    cout<<""<<quantity<<" "<<bir1;
                    cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
                    cout<<"\n\nThank you For Ordering FromTops Tech. Fast Food\n";
                    break;
                case 2:
                	choice = 180*quantity;
					cout<<"\t\t\t--------Your Order---------\n";
                    cout<<""<<quantity<<" "<<bir2;
                    cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
                    cout<<"\n\nThank you For Ordering FromTops Tech. Fast Food\n";
                    break;
                case 3:
					choice = 150*quantity;
					cout<<"\t\t\t--------Your Order---------\n";
                    cout<<""<<quantity<<" "<<bir3;
                    cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
                    cout<<"\n\nThank you For Ordering FromTops Tech. Fast Food\n";
                    break;
                    
                case 4:
					choice = 170*quantity;
					cout<<"\t\t\t--------Your Order---------\n";
                    cout<<""<<quantity<<" "<<bir4;
                    cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
                    cout<<"\n\nThank you For Ordering FromTops Tech. Fast Food\n";
					break;	
			}
			cout<<"Would you like to order anything else? Y / N:";
            cin>>gotostart;
            if(gotostart=='Y' || gotostart=='y')
            {
              goto beginning;
              //return 0;
            }
		}
		return 0;
			
			
			
			
			
			
		

}
