// Alandric Jones
// November 14,2016
// Project #2

#include "Person.h"
#include "list.h"
#include "Person.h"
#include "TRF.cpp"
#include "omp.h"



Traveler::Traveler(unsigned int arrival_time, int main, int desired) {
	
	id_num++ = id;
	mainFloor = main;
	desiredFloor = desired;
	waitTime = 0;
	onElevator = 0;
	Timearrival = arrival_time;
	

	if (main < desired) {
		directions = 1;
	}
	
	else if (desired < main) {
		directions = 0;
	}
	

}


