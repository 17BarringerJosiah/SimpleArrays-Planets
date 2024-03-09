// Project7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// <Project7> -- Programming: Simple Arrays Assignment
// CSIS111-<B01>

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

// Class for Planet
enum class Planet {
    Mercury,
    Venus,
    Earth,
    Moon,
    Mars,
    Jupiter,
    Saturn,
    Uranus,
    Neptune,
    Pluto
};

string planetName;

// User input for weight and planet name set up as a function
void GetUserInput(double & weight, string & planetName) {
    cout << "Enter your weight on Earth (in kilograms): ";
    cin >> weight;

    cout << "Enter the name of a planet from these choices (Mercury, Venus, Earth, Moon, Mars, Jupiter, Saturn, Uranus, Neptune, Pluto): ";
    cin >> planetName;
}

// Function that converts input planetName to Planet
Planet ConvertInputToPlanetType(const string & planetName) {
    if (planetName == "Mercury") return Planet::Mercury;
    else if (planetName == "Venus") return Planet::Venus;
    else if (planetName == "Earth") return Planet::Earth;
    else if (planetName == "Moon") return Planet::Moon;
    else if (planetName == "Mars") return Planet::Mars;
    else if (planetName == "Jupiter") return Planet::Jupiter;
    else if (planetName == "Saturn") return Planet::Saturn;
    else if (planetName == "Uranus") return Planet::Uranus;
    else if (planetName == "Neptune") return Planet::Neptune;
    else if (planetName == "Pluto") return Planet::Pluto;
    else return Planet::Earth;  // Default to Earth if planet name is not recognized
}

// Output weight for specified planet
void OutputWeight(double weight, Planet planet, const string & planetName) {
    double factor;

    // Switch statement to calculate weight based on the planet
    switch (planet) {
    case Planet::Mercury:
        factor = 0.4155;
        break;
    case Planet::Venus:
        factor = 0.8975;
        break;
    case Planet::Earth:
        factor = 1.0;
        break;
    case Planet::Moon:
        factor = 0.166;
        break;
    case Planet::Mars:
        factor = 0.3507;
        break;
    case Planet::Jupiter:
        factor = 2.5374;
        break;
    case Planet::Saturn:
        factor = 1.0677;
        break;
    case Planet::Uranus:
        factor = 0.8947;
        break;
    case Planet::Neptune:
        factor = 1.1794;
        break;
    case Planet::Pluto:
        factor = 0.0899;
        break;
    default:
        // Error message to handle unknown planet type 
        cerr << "Error: Unknown planet type\n";
        return;
    }

    // Output the calculated weight on the specified planet
    cout << "Your weight on " << planetName << " would be: " << weight * factor << " kilograms.\n";
}

int main() {

    cout << "Josiah Barringer -- CSIS111_B01" << endl << endl;

    string planetName;
    double weight;
    

    // Get user input for weight and planetName
    GetUserInput(weight, planetName);

    // Convert planet name to PlanetType using function previously made
    Planet planet = ConvertInputToPlanetType(planetName);

    // Output the weight and planetName on the specified planet
    OutputWeight(weight, planet, planetName);

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
