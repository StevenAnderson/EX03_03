#include <iostream>
using namespace std;

/////Main Class EvenNumber
class EvenNumber{
    
private:
    //value is private to make sure its even
    int value;
    
public:
    //constructor to set it to 0
    EvenNumber (){
        value=0;
    }
    //constructor to set it to any even number
    EvenNumber (int new_val){
        if(new_val%2==0)
        value=new_val;
    }
    
    
    //class functions
    int getValue();
    EvenNumber getNext();
    EvenNumber getPrevious();
   
};