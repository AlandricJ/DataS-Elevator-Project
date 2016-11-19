// Alandric Jones
// November 16, 2016
// Project #2

#include <cstdlib>
#include <ctime>

using namespace std;

class Random {

public:

	Random() {
		srand(std::time(0));
	}

	Random(int button) {
		
	}

	int floor_curr_Generator(int floors_num) {

		int floor_curr;
		floor_curr = int(std::rand()) % floors_num;

		return floor_curr;
	}

	int Floor_Dest_Generator(int floors_num, int floor_curr) {

		int floor_dest;

		bool equal = true;

		while (equal) {

			floor_dest = rand() % floors_num;
			
			if (floor_dest != floor_curr) {
				equal = false;
			}
		}
		return floor_dest;
	}
	
	int next_int (int ele) {
		
		return int(next_double() * ele);
	}

	double next_double() {
		
		double num = double(std::rand();
		return num;
	}

	
};