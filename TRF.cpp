// Alandric Jones
// November 14,2016
// Project #2



using namespace std;


int main() {

    #pragma omp parallel num_threads(7){}
	int totalTime = 120 ;
	int floors = 50;
	double arrivalRate = .9;
	bool showAll = true;
	char choice;

	while (true) {
		
	#pragma omp parallel num_threads(7) {

		int_ID = omp_get_threads_num();

		cout << "1. Set Time " endl;

		cout << "2. Number of floors in Elevator " endl;

		cout << "3. Travelor's Arrival Time" endl;

		cout << "4. Elevator Start" endl;

		cout << "5. Exit " endl;

		cout << "Which floor would you like to go to? "; endl;

		cin >> choice;
		}
		switch (choice) {

		case '1': {
			cout << "Time: ";
			cin >> overallTime;
			break;
		}
		case '2': {
			cout << "Rate: ";
			cin >> RateArrival;
			break;
		}
		case '3': {
			cout << "Floors: ";
			cin >> chooseFloor;
			break;
		}
		case '4': {
			(floors, overallTime, RateArrival, showAll);
			sim.run_simulation();
			sim.show_stats();
			break;
		}
		case '5': {
			return false;
		}
		
		default: {
			cout << "Could not run" << endl;
			break;
		}

		}
	}


	cin.get();
	return 0;
}
