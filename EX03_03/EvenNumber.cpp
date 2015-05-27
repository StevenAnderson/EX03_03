#include "EvenNumber.h"
/// displays the value of even number
int EvenNumber::getValue(){
    return value;
};

//Displays the next highest even number by adding 2
EvenNumber EvenNumber::getNext(){
    value=value+2;
    
    return value;
};

//Displays the next lowest number from the original by subtracting 4
// subtracts 4 due to adding 2 to it.
EvenNumber EvenNumber::getPrevious(){
    
    value = value-4;
    return value;
};
