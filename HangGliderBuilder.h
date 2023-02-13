#pragma once
#include <iostream>
#include "AircraftBuilder.h"
using namespace std;
class HangGliderBuilder : public AircraftBuilder {
public:
	HangGliderBuilder() {
		aircraft = new Aircraft("Hang Glider");
	}
	void BuildFrame()override {
		aircraft->SetPart("frame", "no frame");
	};
	void BuildEngine() override {
		aircraft->SetPart("engine", "no engine");
	};
	void BuildWheels()override {
		aircraft->SetPart("wheels", "no wheels");
	};
	void BuildDoors()override {
		aircraft->SetPart("doors", "no doors");
	};

	void BuildWings() override {
		aircraft->SetPart("wings", "1");
	};
};