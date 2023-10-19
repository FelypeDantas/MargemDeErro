#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float z, o, aux, n, e, m, aux1=0.90, aux2=0.95, aux3=0.99;
    int r1, r2;
    
    std::cout << "Informe o percentual de Zc: " << std::endl;
    std::cin >> z;
    
    while(z != aux1 and aux2 and aux3){
        if(z != aux1 and aux2 and aux3){
            std::cout << "Zc invalido, digite entre 0.90, 0.95 ou 0.99" << std::endl;
            std::cout << "Informe o percentual de Zc:" << std::endl;
            std::cin >> z;
        }
    }
    std::cout << "Informe o valor do desvio padrão: " << std::endl;
    std::cin >> o;
    
    std::cout << "Informe o número de amostras: " << std::endl;
    std::cin >> n;
    
    std::cout << " Informe a média: " << std::endl;
    std::cin >> m;
    
    if(z == aux1){
        aux = 1.645;
        
        e = (aux*o) / (sqrt(n));
        
        r1= m - e;
        r2= m + e;
        
        std::cout << r1 << " < u < " << r2 << std::endl;
    }
    else if(z == aux2){
        
        aux = 1.96;
        
         e = (aux*o) / (sqrt(n));
        
        r1= m - e;
        r2= m + e;
        
        std::cout << r1 << " < u < " << r2 << std::endl;
    }
    else if(z == aux3){
        aux = 2.575;
        
         e = (aux*o) / (sqrt(n));
        
        r1= m - e;
        r2= m + e;
        
        std::cout << r1 << " < u < " << r2 << std::endl;
    }

    return 0;
}

