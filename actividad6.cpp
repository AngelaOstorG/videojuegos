# include <iostream>
using namespace std;

int main (){
	system ("color f6");
	int n;
	double precio, total=0;
	do{
	do{
		cout<<"\nIngrese la cantidad vendida:"<<endl;
		cin>>n;
		if(n<0)
		cout<<"cantidad no validad";
	} while(n<0);
		if(n>0){
			cout<<"introdusca el precio:"<<endl;
			do{
				cin>>precio;
				if(precio<0)
				cout<<"precio no valido"<<endl;
				else total+=n*precio;
			}while(precio<0);
		}
	}while(n!=0);
	cout<<"total vendido es:"<<total<<endl;
	system("pause");
	}	
	
