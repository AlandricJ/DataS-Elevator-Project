// Alandric Jones
// November 16,2016
// Project 2

#include "E.h"

using namespace std;

class Simulator {

public:

private:
	
	int overall_time;
	bool show_all;
	int timeClock;

	typedef ::list <Person> list;

	Simulator() : (0) {}

	Simulator(int thefloors, int timeClock, double arrival, bool show) : overall_time(time),
		show_all(show), timeClock(0) {
		numEle tmp(thefloors, arrival);
		numele = tmp;
	}

	void simulator_run();
	void elev_Accelerate();
	void ele_Decelerate
	;



};

// Accelerates and decellerates elevator for simulator
void Simulator::simulator_run() {

	for (timeClock = 0; timeClock < overall_time; 
		clock++) {
		ele.checkArrivals(timeClock, show_all);
		ele_accelerate();
	}
}

void Simulator::simulator_run() {

	for (timeClock = 0; timeclock < overall_time;
		clock++) {
		
		ele.checkArrivals(clock, show_all);
		ele_decelerate();
	}
}


void Simulator::ele_accelerate() {
	
	if (ele.travelerWaiting()) {
		if (ele.stop(show_all)) {
			timeClock++; // Stop the time 
		}
		ele.nextFloor(show_all);
	}
	
	else if (show_all) {
		cout << "Time " << clock
			
	}
}


void Simulator::show_num() { // Shows the numbers and how many travelers are on the elevator
	
	cout << "\n The number of travelers that have arrived at their destination "
		<< ele.getPassengersServed() << endl;

	double average_overall_waiting_time = double(elevator.getOverallWait())

	cout << "At this time There are  " << elevator.getNumOnElev()
		<< " Travelers in the elevator " << endl;

	cout << " THere are travelers waiting to get to their destination: "
		<< elevator.getOverallWaitinTImeg() << endl;
}

#endif
