#include<iostream>
#include <string>
#include "printmsg.h"
#include "my_class.h"
#include <string>
#include "complexe2d.h"



/*int main(){
    std::cout <<"Hello World!\n";
    return 0 ;
}*/


/*int main() {
    printmsg("Hello World !");
    return 0;
}*/

/*int main() {
    my_class test;
    test.print_my_element();

    my_class test2("Hello World !");
    test2.print_my_element();

    return 0;
}*/


int main() {
    Complex2D c1(3, 4); 
    Complex2D c2(1, -2); 

    std::cout << "c1 est : ";
    c1.display(); 

    std::cout << "c2 est : ";
    c2.display();
    Complex2D somme = c1.add(c2);

    
    std::cout << "La somme de c1 et c2 est : ";
    somme.display();

    return 0;
} 

