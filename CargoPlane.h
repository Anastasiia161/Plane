#pragma once
#include <iostream>
#include "Aircraft.h"
#include"AircraftBuilder.h"

using namespace std;
class CargoPlane :public AircraftBuilder {
public:
	CargoPlane() {
		aircraft = new Aircraft("Boeing 747 LCF Dreamlifter");
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
		aircraft->SetPart("doors", "8");
	};

	void BuildWings() override {
		aircraft->SetPart("wings", "12");
	};
}; 
