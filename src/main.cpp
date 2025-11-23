#include "StreetVendor.h"
#include <iostream>
using namespace std;

int main() {
    StreetVendor TacoTruck("El Jefe Taco Truck", "Mexican Food", "800 Manhattan Ave", 2000);

    StreetVendor EmpanadaTruck("Abuelas Empanadas", "Colombian Food", "3030 Thomson Ave", 1500);

    TacoTruck.DisplayInfo();
    TacoTruck.Relocate("Manhattan");
    TacoTruck.Relocate("Queens");

    EmpanadaTruck.DisplayInfo();
    EmpanadaTruck.Relocate("Brooklyn");
    EmpanadaTruck.Relocate("Manhattan");
    
    return 0;
}