// Alandric Jones
// November 14,2016
// Project #2


#include <iostream>
#include <list>
#include <vector>
#include <iterator>
#include <cstdlib>



using namespace std;

class Traveler {

private:
	
	static int id_num; // random ID
	bool direction; // This is for the diretion up or down beginning with the main floor since it is unlimited
	bool onElevator; // lets traveler access elevator
	unsigned int TimeWait;   // Time alloted for wait
	unsigned int TimeArrival; // Time untill elevator has reached destination
	unsigned int desiredFloor; // get desired floor randomly between the multiple elevators
	unsigned int mainFloor; // get main floor randomly between the multiple elevtors
	unsigned int id;  // initialized ID
	






public:
	

	
	Traveler ( int main, int desired, unsigned int time_arrival, );

	bool openDoor() {
		return onElevator;
	}

	void Wait() {
		Timewait++;
	}

	unsigned int get_id() {
		return id;
	}

	bool get_directions() {
		return direction;
	}

	void get_on_elevator() {
		onElevator = true;
	}

	unsigned int get_waiting_time() {
		return timeWait;
	}

	unsigned int get_arrival_time() {
		return timeArrival;
	}

	

	unsigned int get_desired_floor() {
		return desiredFloor;
	}

	unsigned int get_main_floor() {
		return mainFloor;
	}

};


