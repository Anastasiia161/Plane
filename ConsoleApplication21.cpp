#include <iostream>
#include "AircraftConstructor.h"
#include "AircraftBuilder.h"
#include"HangGliderBuilder.h"
#include"Aircraft.h"
#include"PassangerPlane.h"
#include"CargoPlane.h"


using namespace std;

int main()
{
    try {
        AircraftBuilder* builder;
        AircraftConstructor* constructor = new AircraftConstructor();

        builder = new HangGliderBuilder();
        constructor->Construct(builder);
        Aircraft* aircraft = builder->GetAircraft();
        builder->GetAircraft();
        aircraft->Show();

        delete builder;
        cout << endl << "________________" << endl;
        builder = new PassangerPlane();
        constructor->Construct(builder);
        aircraft = builder->GetAircraft();
        builder->GetAircraft();
        aircraft->Show();
       

        delete builder;
        
        cout << endl << "----New Plane----" << endl;
        builder = new CargoPlane();
        constructor->Construct(builder);
        aircraft = builder->GetAircraft();
        builder->GetAircraft();
        aircraft->Show();
        delete aircraft;
        delete constructor;

        delete builder;
    }

    catch (...) {
        cout << "Error" << endl;
    }

}
