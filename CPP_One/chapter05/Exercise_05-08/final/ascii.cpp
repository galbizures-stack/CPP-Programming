#include "ascii.h"
#include <iostream>

void loopAscii(int start, int end){
    for (int i = start; i < end+1; i++){
        char letter = static_cast<char>(i);
        std::cout<<letter<<" ";
    }
    std::cout<<"\n";    
}