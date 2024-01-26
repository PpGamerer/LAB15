#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

//Write definition of shuffle() using pointer here 
void shuffle(int *x,int *y,int *z,int *w){
	int a = rand()%4;
	int b = rand()%4;
	int c = rand()%4;
	int d = rand()%4;

	while(a==b || a==c || a==d || b==c || b==d || c==d){
		a = rand()%4;
		b = rand()%4;
		c = rand()%4;
		d = rand()%4;
		}
	
	int f[] = {*x,*y,*z,*w};
	*x = f[a];
	*y = f[b];
	*z = f[c];
	*w = f[d];

}