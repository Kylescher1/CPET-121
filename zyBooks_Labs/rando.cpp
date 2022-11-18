
#include <iostream>
#include <vector>
using namespace std;

class Car {
   public:
      Car(int distanceToSet = 0);
      int GetDistanceTraveled() const;
   private:
      int distanceTraveled;
};

Car::Car(int distanceToSet) {
   distanceTraveled = distanceToSet;
}

int Car::GetDistanceTraveled() const {
   return distanceTraveled;
}

int GetTotalMiles(vector<Car*> carsList) {
   int totalMiles;
   unsigned int i;

   totalMiles = 0;

   for (i = 0; i < carsList.size(); i++) {
      totalMiles = totalMiles + carsList.at(i)->GetDistanceTraveled();
   }

   return totalMiles;
}

int main() {
   vector<Car*> garage;
   garage.push_back(new Car(30));
   garage.push_back(new Car(20));
   garage.push_back(new Car(5));

   cout << "Traveled: " << GetTotalMiles(garage) << endl;
   delete garage.at(2);
   garage.erase(garage.begin() + 2);
   cout << "Traveled: " << GetTotalMiles(garage) << endl;

   return 0;
}