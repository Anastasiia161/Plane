#pragma once
#include <iostream>
#include"AircraftBuilder.h"
using namespace std;
class AircraftConstructor {
public:
	void Construct(AircraftBuilder* builder) {
		builder->BuildFrame();
		builder->BuildEngine();
		builder->BuildWheels();
		builder->BuildWings();
		builder->BuildDoors();
	}
};