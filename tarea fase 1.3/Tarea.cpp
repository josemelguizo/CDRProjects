#include <iostream>
#include <string>
#include <string_view>


int main() {
    std::string inventario[5] = {"Espada", "Pocion", "Escudo","",""};
    int slot_usados = 3;
    
    inventario[slot_usados] = "Arco";
    slot_usados++;
    
    for (int i = 0; i < slot_usados; i++){
        std::cout << "[" << i << "] " << inventario[i] <<std::endl;
    }
    

    
    std::cout << "Primer item: " << inventario[0] << std::endl;

    return 0;
}