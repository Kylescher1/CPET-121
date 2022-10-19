#include <iostream>
#include <iomanip>


void func(int *a){
    int i = 0;

    for(i = 0; i < 10; i++){
        a[i] = a[i] * -i;
    }
    

}

int main(){
    int a[10];
    int i = 0;
    int *p = 0;
    p = a;

    for(i = 0; i < 10; i++){
        std::cin >> a[i];
    }

    func(p);

    for(i = 9; i >= 0; i--){
        std::cout << std::setw(6) << std::right << a[i] << std::endl;
    }


    
}