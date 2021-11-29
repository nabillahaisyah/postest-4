#include <iostream>
using namespace std;
int main(){
	
	/* Nama : Nabillah Aisyah 
	   Kelas : D
	   NPM : 2117051036
	*/
	
	// Deklarasi Variabel
	int a,b;
	int size_x = 0, size_y = 0, size_x_y = 0;
	int array_x[size_x],array_y[size_y],array_x_y[size_x_y];
	cin >> a;
	cin >> b;

    // input
    
	for (int i = a ; i <= b; i++){
	
		
		if ( i%3 == 0 && i%7 == 0){
			array_x_y[size_x_y] = i;
			size_x_y++;
		}
	 
	   else if ( i%7 == 0){
	   	    array_y[size_y] = i;
	   	    size_y++;
	   }
	   
	   else if ( i%3 ==0){
	   	    array_x[size_x] = i;
	   	    size_x++;	
       }  
    }
    
    // output
    cout<<"Bagi tiga dan tujuh :\n";
    for (int i = 0; i < size_x_y; i++){
    	cout<<array_x_y[i];
    	cout<<"  ";
	}
	
	cout<<endl;
	cout<<"Bagi tujuh :\n";
	for (int i = 0; size_y; i++){
		cout<<array_y[i];
		cout<<"  ";
	}

	cout<<endl;
	cout<<"Bagi tiga :\n";
	for (int i = 0; size_x; i++){
		cout<<array_x[i];
		cout<<"  ";
	}
	
	return 0;
}


