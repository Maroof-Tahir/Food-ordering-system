#include<iostream>
using namespace std;
int main() {
	char name[30], pizza1[]="Chicken Fazita" ,pizza2[]="Chicken Bar BQ" ,pizza3[]="Peri Peri" ,pizza4[]="Creamy", roll1[]="Chicken Chatni Roll", roll2[]="Chicken Mayo Roll", roll3[]="Veg Roll With Fries",bur1[]="Zinger Burger",bur2[]="Chicken Burger",bur3[]="Beef Burger";
	char sand1[]="Club Sandwich", sand2[]="Chicken Crispy Sandwich", sand3[]="Extream Veg Sandwich";
	char bir1[]="Chicken Biryani", bir2[]="Prawn Biryani", bir3[]="Beef Biryani",gotostart ;
	int choice=0,flavour,size, quantity;
	

	system("CLS");
	cout<<"-------------------------HAA. Fast Food----------------------------"<<endl;
	cout<<"Please Enter Your Name: ";
	cin.getline(name, 20);	
	cout<<"Hello! "<<name<<" what would you like to order?"<<endl;

	cout<<"--------------------------Menu-------------------------------"<<endl;

	cout<<"1) Pizzas"<<endl;
	cout<<"2) Burgers"<<endl;
	cout<<"3) Sandwich"<<endl;
	cout<<"4) Rolls"<<endl;
	cout<<"5) Biryani"<<endl;
	cout<<"\nPlease Enter your Choice: ";
	cin>>choice;

	if(choice==1) {
		cout<<"1) "<<pizza1<<endl;
		cout<<"2) "<<pizza2<<endl;
		cout<<"3) "<<pizza3<<endl;
		cout<<"4) "<<pizza4<<endl;
		cout<<"\nPlease Enter which Flavour would you like to eat?:";
		cin>>flavour;
		if(flavour>=1 && flavour<=5) {
			cout<<"\n1) Small Rs.250\n"<<"2) Regular Rs.500\n"<<"3) Large Rs.900\n";
			cout<<"\nChoose Size Please:";
			cin>>size;
			if(size>=1 && size<=3)
				cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(size) {
				case 1:
					choice = 250*quantity;
					break;

				case 2:
					choice = 500*quantity;
					break;

				case 3:
					choice = 900*quantity;
					break;


			}
			system("CLS");
			switch (size) {
				case 1:
					cout<<"--------------------------Your Order------------------------"<<endl;
					cout<<""<<quantity<<" "<<pizza1;
					cout<<"\nYour Total Bill is "<<choice<<endl;
					cout<<"Your Order Will be delivered in 40 Minutes"<<endl;
					cout<<"Thank you For Ordering From HAA. Fast Food"<<endl;
					break;
				case 2:
					cout<<"\t\t--------Your Order---------\n";
					cout<<""<<quantity<<"  "<<pizza2;
					cout<<"\nYour Total Bill is "<<choice<<endl;
					cout<<"Your Order Will be delivered in 40 Minutes"<<endl;
					cout<<"Thank you For Ordering From HAA. Fast Food"<<endl;
					break;
				case 3:
					cout<<"\t\t--------Your Order---------\n";
					cout<<""<<quantity<<" "<<pizza3;
					cout<<"\nYour Total Bill is "<<choice<<endl;
					cout<<"Your Order Will be delivered in 40 Minutes"<<endl;
					cout<<"Thank you For Ordering From HAA. Fast Food"<<endl;
					break;
				case 4:
					cout<<"\t\t--------Your Order---------\n";
					cout<<""<<quantity<<" "<<pizza4;
					cout<<"\nYour Total Bill is "<<choice<<endl;
					cout<<"Your Order Will be delivered in 40 Minutes"<<endl;
					cout<<"Thank you For Ordering From HAA. Fast Food"<<endl;
					break;

			}
			



		}

	}


	else if(choice==2) {
		cout<<"\n1 "<<bur1<<" Rs.180"<<"\n";
		cout<<"2 "<<bur2<<" Rs.150"<<"\n";
		cout<<"3 "<<bur3<<" Rs.160"<<"\n";
	
		cout<<"\nPlease Enter which Burger you would like to have?: ";
		cin>>size;
		if(size>=1 && size<=3) {
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(size) {
				case 1:
					choice = 180*quantity;
					break;

				case 2:
					choice = 150*quantity;
					break;

				case 3:
					choice = 160*quantity;
					break;

			}
			system("CLS");
			switch (size) {
				case 1:
					cout<<"\t\t--------Your Order---------\n";
					cout<<""<<quantity<<" "<<bur1;
					cout<<"\nYour Total Bill is "<<choice<<endl;
					cout<<"Your Order Will be delivered in 40 Minutes"<<endl;
					cout<<"Thank you For Ordering From HAA. Fast Food"<<endl;
					break;
				case 2:
					cout<<"\t\t--------Your Order---------\n";
					cout<<""<<quantity<<"  "<<bur2;
					cout<<"\nYour Total Bill is "<<choice<<endl;
					cout<<"Your Order Will be delivered in 40 Minutes"<<endl;
					cout<<"Thank you For Ordering From HAA. Fast Food"<<endl;
					break;
				case 3:
					cout<<"\t\t--------Your Order---------\n";
					cout<<""<<quantity<<" "<<bur3;
					cout<<"\nYour Total Bill is "<<choice<<endl;
					cout<<"Your Order Will be delivered in 40 Minutes"<<endl;
					cout<<"Thank you For Ordering From HAA. Fast Food"<<endl;
					break;


			}
			
		}
	} else if(choice==3) {
		cout<<"\n1  "<<sand1<<" Rs.240"<<"\n";
		cout<<"2  "<<sand2<<" Rs.160"<<"\n";
		cout<<"3  "<<sand3<<" Rs.100"<<"\n";
	
		cout<<"\nPlease Enter which Sandwich you would like to have?:";
		cin>>size;
		if(size>=1 && size<=3) {
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(size) {
				case 1:
					choice = 240*quantity;
					break;

				case 2:
					choice = 160*quantity;
					break;

				case 3:
					choice = 100*quantity;
					break;

			}
			system("CLS");
			switch (size) {
				case 1:
					cout<<"\t\t--------Your Order---------\n";
					cout<<""<<quantity<<" "<<sand1;
					cout<<"\nYour Total Bill is "<<choice<<endl;
					cout<<"Your Order Will be delivered in 40 Minutes"<<endl;
					cout<<"Thank you For Ordering From HAA. Fast Food"<<endl;
					break;
				case 2:
					cout<<"\t\t--------Your Order---------\n";
					cout<<""<<quantity<<"  "<<sand2;
					cout<<"\nYour Total Bill is "<<choice<<endl;
					cout<<"Your Order Will be delivered in 40 Minutes"<<endl;
					cout<<"Thank you For Ordering From HAA. Fast Food"<<endl;
					break;
				case 3:
					cout<<"\t\t--------Your Order---------\n";
					cout<<""<<quantity<<" "<<sand2;
					cout<<"\nYour Total Bill is "<<choice<<endl;
					cout<<"Your Order Will be delivered in 40 Minutes"<<endl;
					cout<<"Thank you For Ordering From HAA. Fast Food"<<endl;
					break;


			}
			
		}
	}


	else if(choice==4) {
		cout<<"\n1 "<<roll1<<" Rs.150"<<"\n";
		cout<<"2 "<<roll2<<" Rs.100"<<"\n";
		cout<<"3 "<<roll3<<" Rs.120"<<"\n";
		
		cout<<"\nPlease Enter which you would like to have?: ";
		cin>>size;
		if(size>=1 && size<=3) {
			cout<<"\nHow Much Rolls Do you want: ";
			cin>>quantity;
			switch(size) {
				case 1:
					choice = 150*quantity;
					break;

				case 2:
					choice = 100*quantity;
					break;

				case 3:
					choice = 120*quantity;
					break;

			}
			system("CLS");
			switch (size) {
				case 1:
					cout<<"\t\t--------Your Order---------\n";
					cout<<""<<quantity<<" "<<roll1;
					cout<<"\nYour Total Bill is "<<choice<<endl;
					cout<<"Your Order Will be delivered in 40 Minutes"<<endl;
					cout<<"Thank you For Ordering From HAA. Fast Food"<<endl;
					break;
				case 2:
					cout<<"\t\t--------Your Order---------\n";
					cout<<""<<quantity<<"  "<<roll2;
					cout<<"\nYour Total Bill is "<<choice<<endl;
					cout<<"Your Order Will be delivered in 40 Minutes"<<endl;
					cout<<"Thank you For Ordering From HAA. Fast Food"<<endl;
					break;
				case 3:
					cout<<"\t\t--------Your Order---------\n";
					cout<<""<<quantity<<" "<<roll3;
					cout<<"\nYour Total Bill is "<<choice<<endl;
					cout<<"Your Order Will be delivered in 40 Minutes"<<endl;
					cout<<"Thank you For Ordering From HAA. Fast Food"<<endl;
					break;


			}

		}
	} else if(choice==5) {
		cout<<"\n1 "<<bir1<<" Rs.160"<<"\n";
		cout<<"2 "<<bir2<<" Rs.220"<<"\n";
		cout<<"3 "<<bir3<<" Rs.140"<<"\n";
	
		cout<<"\nPlease Enter which Biryani you would like to have?:";
		cin>>size;
		if(size>=1 && size<=3) {
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(size) {
				case 1:
					choice = 160*quantity;
					break;

				case 2:
					choice = 220*quantity;
					break;

				case 3:
					choice = 140*quantity;
					break;

			}
			system("CLS");
			switch (size) {
				case 1:
					cout<<"\t\t--------Your Order---------\n";
					cout<<""<<quantity<<" "<<bir1;
					cout<<"\nYour Total Bill is "<<choice<<endl;
					cout<<"Your Order Will be delivered in 40 Minutes"<<endl;
					cout<<"Thank you For Ordering From HAA. Fast Food"<<endl;
					break;
				case 2:
					cout<<"\t\t--------Your Order---------\n";
					cout<<""<<quantity<<"  "<<bir2;
					cout<<"\nYour Total Bill is "<<choice<<endl;
					cout<<"Your Order Will be delivered in 40 Minutes"<<endl;
					cout<<"Thank you For Ordering From HAA. Fast Food"<<endl;
					break;
				case 3:
					cout<<"\t\t--------Your Order---------\n";
					cout<<""<<quantity<<" "<<bir3;
				cout<<"\nYour Total Bill is "<<choice<<endl;
					cout<<"Your Order Will be delivered in 40 Minutes"<<endl;
					cout<<"Thank you For Ordering From HAA. Fast Food"<<endl;
					break;


			}
			
		}
	}

	else {
		system("CLS");
		cout<<"Please Select Right Option: \n";
	
	}


}
