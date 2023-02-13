#pragma once
#include <iostream>
#include "Aircraft.h"
#include"AircraftBuilder.h"

using namespace std;
class PassangerPlane :public AircraftBuilder {
public:
	PassangerPlane() {
		aircraft = new Aircraft("Boing 737");
	}
	void BuildFrame()override {
		aircraft->SetPart("frame", "no frame");
	};
	void BuildEngine() override {
		aircraft->SetPart("engine", "4 8W");
	};
	void BuildWheels()override {
		aircraft->SetPart("wheels", "16");
	};
	void BuildDoors()override {
		aircraft->SetPart("doors", "6");
	};

	void BuildWings() override {
		aircraft->SetPart("wings", "2");
	};
};