
#include <iostream>
#include <vector>
using namespace std;

class Flight{
  private: 
    int flightId = 0;
    int flightCapicity ;
    int totalResevedSeats;

    struct FlightInfo {
      int id;
      int numberSeats;
    };

    vector<FlightInfo> infos;

  public:
    Flight();
    Flight(int _flightId);
    void reserve(int id, int numberSeats);
    void report();
    int getId();

};


Flight::Flight(){
  flightId++;
  flightCapicity = 50;
  totalResevedSeats= 0;
}

Flight::Flight(int _flightId){
  flightId += _flightId + 1;
  flightCapicity = 50;
  totalResevedSeats= 0;
}

void Flight::report(void){
  cout<<"============[Flight Report]==============\n";
  cout<<"Flight ID: ["<<flightId<<"]\n";
  cout<<"Seats Reserved: "<<totalResevedSeats<<"/"<<flightCapicity;
  cout<<" "<<(flightCapicity * (100 * totalResevedSeats) / flightCapicity)<<"%"<<endl;
  cout<<"==========================================\n";
}

int Flight::getId(){
  return flightId;
}

