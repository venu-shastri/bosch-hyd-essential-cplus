// Online C++ compiler to run C++ program online
#include <iostream>
class BankCustomer{
    private:
        string name;
        string adharNumber;
        string panNumber;
        string emailId;
        string phoneNumber;
    
    public:
    //Compile Time Polymorphism , constructor Overloading
    BankCustomer(string nameArg,string adharNumberArg,string panNumberArg){
        this->name=nameArg;
        this->adharNumber=adharNumberArg;
        this->panNumber=panNumberArg;
        this->emailId="";
        this->phoneNumber="";
        
    }
       BankCustomer(string nameArg,string adharNumberArg,string panNumberArg,string emailArg){
        this->name=nameArg;
        this->adharNumber=adharNumberArg;
        this->panNumber=panNumberArg;
        this->emailId=emailArg;
        this->phoneNumber="";
        
    }
     BankCustomer(string nameArg,string adharNumberArg,string panNumberArg,string phoneArg){
        this->name=nameArg;
        this->adharNumber=adharNumberArg;
        this->panNumber=panNumberArg;
        this->emailId="";
        this->phoneNumber=phoneArg;
        
    }
    
     BankCustomer(string nameArg,string adharNumberArg,string panNumberArg,string phoneArg,string emailArg){
        this->name=nameArg;
        this->adharNumber=adharNumberArg;
        this->panNumber=panNumberArg;
        this->emailId=emailArg;
        this->phoneNumber=phoneArg;
        
    }
    
        void printCustomerInfo(){
            //cout<<
        }
    
};

int main() {
    // Write C++ code here
    std::cout << "Try programiz.pro";
    
    return 0;
}
