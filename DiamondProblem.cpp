// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

class Device{
  protected:
    string assetId,model;
  public:
    Device(string  assetIdArg,string modelArg): assetId{assetIdArg},model{modelArg}{
        cout<<"Device Instantiated"<<endl;
    }
  
    ~Device(){
        cout<<"Device Destructed"<<endl;
    }
};
class Printer: public Device{
    protected:
    Printer():Device::Device("",""){
        cout<<"Printer Instantiated"<<endl;
    }
 
  public:
    Printer(string  assetIdArg,string modelArg):Device::Device(assetIdArg,modelArg){
        cout<<"Printer Instantiated"<<endl;
    }
    void print(string content){ cout<<"Printer Printing "<<content<<endl;
    }
    ~Printer(){
        cout<<"Printer Destructed"<<endl;
    }
};

class Scanner:public Device{
 
 protected:
 Scanner():Device::Device("",""){
     cout<<"Scanner Instantiated"<<endl;
 }
  public:
    Scanner(string  assetIdArg,string modelArg): Device::Device(assetIdArg,modelArg){
        cout<<"Scanner Instantiated"<<endl;
    }
    void scan(string content){ cout<<"Scanner Scanning "<<content<<endl;
    }
    ~Scanner(){
        cout<<"Scanner Destructed"<<endl;
    }
};


class PrintScanner:public Device{
    Printer printerObj {"H1","HP1"};
    Scanner scannerObj {"H2","HS1"};
    public:
    PrintScanner(string assetId,string model):Device::Device(assetId,model){
        
    }
    void print(string content){
      //delegation
      printerObj.print(content);
      
    }
   void scan(string content){
      //delegation
     scannerObj.scan(content);
   }
    
    ~PrintScanner(){
        cout<<"Print Scanner Destructed"<<endl;
    }
};


int main() {
    // Write C++ code here
   //Printer printerObj{ "P1","HP"};
    //Scanner scannerObj{ "S1","HP"};
   PrintScanner psObj{"PS1","HP"};
    //printerObj.print("Doc1.txt");
    //scannerObj.scan("Doc1.png");
    //psObj.print("Doc1.txt");
    //psObj.scan("Doc1.txt");
    return 0;
}
