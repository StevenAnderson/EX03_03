#include "EvenNumber.h";
int main (){
    //creates object Even Number 1
    //set to 16 through constructor
    EvenNumber E1(16);
    //displays set value
    cout<< "This even number is " << E1.getValue() << endl;
    //creates 2 new objects through the getnext/previous functions
    EvenNumber EN=E1.getNext();
    EvenNumber EP=E1.getPrevious();
    //displays the values of the new objects
    cout << "Next even number is " << EN.getValue() << endl;
    cout << "The previous even is " << EP.getValue()<< endl;
    
    return 0;
    
}