class A{
public:
void foo(){}
};
class B{
void fun(){}
};
class C:public A,public B{

};


class C{
    A obj_A;
   B obj_B;
   public:
      void foo() { obj_A.foo();}
      void fun) { obj_B.fun();}
};

int main(){

C obj_c;
obj_c.foo();
obj.c.fun();
}


