//
//  main.cpp
//  Practise
//
//  Created by Mangaldeep Pal on 14/02/23.
//

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <CoreGraphics/CoreGraphics.h>


int main(int argc, const char * argv[]) {
    // insert code here...
    
    std::string a,b,c,d,a2,b2,c2,d2;
    int i=1;
    
    top:
    std::cout<<"Enter new password ";
    std::cin>>a;
    std::cout<<"Re-Enter Password ";
    std::cin>>b;
    
    
    if(a==b){
        std::cout<<"Password mached!!!, Press s to save or m to modify ";
        std::cin>>c;
        if(c=="s"){
            std::cout<<"Password Save"<<std::endl;
            goto top2;
        }if(c=="m"){
            goto top;
        }
    }else{
        std::cout<<"Password don't match!!!, Press r to retry";
        std::cin>>d;
        if(d=="r"){
            goto top;
        }
    }
    
    std::cout<<"Welcome to login page!!!";
    
top2:
    while(i<=5){
        std::cout<<"Enter Password";
        std::cin>>a2;
        
        if(a2!=a){
            std::cout<<"Wrong Password, Try again"<<"("<<i<<")"<<std::endl;
            ++i;
        }
        if (a2==a){
                std::cout<<"Successfully logged In"<<std::endl;
                goto top3;
            }
    }
top4:
    std::cout<<"Several incorrect attempts!!!, system locked"<<std::endl;
top3:
    return 0;
    
}

