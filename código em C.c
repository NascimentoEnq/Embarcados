#include <stdio.h>
int func(int a, int scan){
	switch(scan){
		case 1: 
			return a; //se negar uma negação, não altera o valor (!(!a))
		default: 
			return -1;
		  }
}
int main(){
	
	printf ("(%d or %d) = %d\n",1 ,func(1,1));
      	return 0;
}