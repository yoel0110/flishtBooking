#include <iostream>
#include "C:\Learn_Space\c++\flightBooking\src\classes\fligth.cpp"

using namespace std;

int main(){
  Flight flightToChicago;
  Flight spain(flightToChicago.getId());

  flightToChicago.report();
  spain.report();


  return EXIT_SUCCESS;
}