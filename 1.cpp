// Example program
using namespace std;
#include <iostream>
#include <string>

int main()
{
    int mk =0;
    char letra;
    string p1 ="Banana, Coliseu, Abaporu, Sonic, paralelepipedo"; 
    cout << p1<<endl;
    letra='a';
    while (mk != 1){  
    
    	size_t found = p1.find(letra); 
    	if (found != string::npos) {
	     
        p1.erase(p1.begin()+found);
    	
	} else if (islower(letra)){
    	
	    letra=toupper(letra);
    	
	} else {	
    	
	    mk =1;
    	    cout<<p1;
    	
	}
    
    } 

}
  

