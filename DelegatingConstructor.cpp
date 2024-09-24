// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class A{
		private:
			int a,b,c;
		public:
				A(){
				cout<<"A()"<<endl;
				 a=b=c=0;
				}
				A(int x):A(){
				
					this->a=x;
					cout<<"A(int x)"<<endl;
				}
				A(int x,int y):A(x){
					this->b=y;
					cout<<"A(int x,int y)"<<endl;
				}
				A(int x,int y,int z): A(x,y){
					
						this->c=z;;
						cout<<"int x,int y,int z"<<endl;
				}
	};
int main() {
    // Write C++ code here
    
    A obj(10,20,30);
    A *ptr=new A(10,20,30);
    return 0;
    
    
    
    

    return 0;
}
