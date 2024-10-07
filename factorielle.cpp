#include <iostream>
#include<math.h>

int main()
{ 
    std::cout << "entrer un nombre:";
    int n(0);
    std::cin >> n;
    int f=1,i;
    for(i=1;i<=n;i++){
    	f=f*i;
    }
    std::cout <<"la factorielle de " << n << "vaut:" << f ;
return 0;
}
