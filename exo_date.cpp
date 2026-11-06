#include <iostream>

class Date{
    public: 
    int i;
    int j;
    int a; 
    void afficher(){
       
        std::cout << i << "/" << j << "/" << a << std::endl;
    }
     void incrementer(){
    i++;
    if (i>30){
        i = 1; 
        j++;
    }
    if (j>12){
        j = 1;
        a++;
    }
};
};

int main()
{
Date k;
k.i = 31;
k.j = 12;
k.a = 2026;
k.afficher();
k.incrementer();
k.afficher();
return 0;
}


