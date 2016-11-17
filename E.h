// Alandric Jones
// November 14,2016
// Project #2



using namespace std;

#ifndef E_h
#define E_h

#include "list.h"
#include "Person.h"
#include "Traveler.cpp"
#include "TRF.cpp"
#include "omp.h"


class E {

private:


	int numEle;
	int floorInProgress;
	int overallWaitingTime;
	int Floors;
	int travelerFinished;
	int currFloor;
	list <person> eleInProgress;
	bool directions;
	double arrivalTime;


public:

#pragma omp parallel

	E() {}

	E(int floors, double arrival) : Timearrival(arrival), travelerFinished(0), currFloor(0), numEle(0), directions(1),
		overallWaitingTime(0), Floors(floors), eleInProgress(), floorInProgress() {}


	void openDoor(list <Person> ::iterator itr, bool show) {
		itr->get_on_elevator();
		numEle++;
		if (show) {
			cout << "The elevator has picked up the passenger" << endl;
		}
	}
	// This is when the individual has arrived at the elevator to make request


	void switchFloors(bool up, bool show) {
		if (up) {
			currFloor++;
		}
		else {
			currFloor--;
		}
		directions = up;
		if (show) {
			cout << "The desired floor is now at your current location " << currFloor << endl;
		}
	}

	// This function is to switch floors from your location to your desired floor

	void nextFloor(bool show_all) {

		if (eleInProgress.empty()) {
			return;

		}

		list <person> ::iterator currJob = eleInProgress.begin();
		currJob->Wait();

		if (currJob->isOnElevator()) {

			if (currFloor == currJob->get_floor()) {
				travelerFinished++;
				overallWaitingTime += currJob->get_waiting_time();
				numEle--;
				eleInProgress.erase(currFloor);

				if (show_all) {
					cout << "Traveler has stepped off the elevator" << endl;
				}
			}

			else if (currFloor < currJob->get_desired_floor()) {
				switchFloors(1, show_all);
			}

			else if (currJob < currFloor->get_desired_floor()) {
				switchFloors(0, show_all);
			}
		}
		else {

			if (currFloor == currJob->get_main_floor()) {
				openDoor(currJob, show_all);
				directions = currJob->get_directions();
			}

			else if (currJob > currFloor->get_main_floor()) {
				switchFloors(1, show_all);
			}

			else if (currFloor > currJob->get_main_floor()) {
				switchFloors(0, show_all);
			}
		}
	}

	// This function goes from the main floor to any desired floor

	bool floorStop(bool show_all) {
		bool stops = false;
		if (eleInProgress.size() <= 1) {
			return stops;
		}

		list <Person> ::iterator curr = 
			
			++eleinProgress.begin();
		

		omp_set_num_threads(2) // create two threads

		#pragma omp parallel for shared(MAX)	
		
		for (curr; curr != open_get_thread_num ());
			
			
			eleInProgress.end();
			
			curr++) {
			
			curr->Wait();

			if (curr->isOnElevator()) {

				if (curr->get_desired_floor() == currFloor) {
					travelerFinished++;
					overallWaitingTime += curr->get_wait_time();
					curr = eleInProgress.erase(curr);

					if (show_all) {
						cout << "The traveler has just stepped off the elevator" << endl;
					}
					if (curr == eleInProgress.end()) {
						break;
					}
					stops = true;
				}
			}

			else {


				if (curr->get_start_floor() == currFloor
					&& (curr->get_directions() == directions)) {
					openDoor(curr, show_all);
					stops = true;
				}
			}
		}
		return stops;
	}

	// This function makes the elevator stop at current or desired floor
	
	void checkArrivals(int clock, bool showAll) {
		if (currFloor.next_double() < rateArrival) {
			
			int mainFloor = currFloor.Curr_Floor_Generator(Floors);
			
			int destFloor = currFloor.Desired_Floor_Generator(Floors, mainFloor);
				traveler newPass(clock, mainFloor, destFloor);
				eleInProgress.push_back(newPass);
			
			if (showAll) {
				cout << " The Time is "  endl;
				cout <<  clock << ": "    endl;
				cout << " a passenger at " << newPass.get_main_floor() endl;
				cout << " wants to go to floor " << newPass.get_desired_floor() endl;
				cout << " the new wait list has "	endl
				cout << eleInProgress.size() << " people." << endl;
			}
		}
	}


	

// Getters

	bool personWaiting() {

		return eleInProgress.size() > 0; 
	}

	int getnumEle() {  // Gets numbers on elevators

		return numEle;
	}

	int getOverallWait() {

		return overallWaitingTime; // Gets overall wait time
	}

	int getOverallllWaiting() {

		return eleInProgress.size(); 
	}

	int getTravelerFinished() {

		return travelerFinished; // gets traveler that is finished
	}


}

#endif 