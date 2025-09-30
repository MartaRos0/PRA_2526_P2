#include "DyV.h"
#include <iostream>
using namespace std;

int main(){

	 std::vector<int> vi{1 ,2,3 ,5 , 9};
     	 std::cout << "int ascendente: " << BusquedaBinaria(5, vi, 0, vi.size() - 1) << std::endl;
	 return 0;

}
