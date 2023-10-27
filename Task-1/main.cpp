#include <iostream>

using namespace std;

float celsiusToFahrenheit(float celsius);
float celsiusToKelvin(float celsius);

float fahrenheitToCelsius(float fahrenheit);
float fahrenheitToKelvin(float fahrenheit);

float kelvinToCelsius(float kelvin);
float kelvinToFahrenheit(float kelvin);

int main() {
    float temperature = 0.0;
    char unit = '\0';

    cout << endl;

    cout << "----------------------" << endl;
    cout << "| Input Value & Unit |" << endl;
    cout << "----------------------" << endl;

    cout << endl;

    cout << "Enter Temperature to Convert: ";
    cin >> temperature;

    cout << "Enter Unit (C, F, or K)     : ";
    cin >> unit;

    cout << endl;

    cout << "--------------------" << endl;
    cout << "| Converted Values |" << endl;
    cout << "--------------------" << endl;

    cout << endl;

    switch (unit) {
    case 'C':
    case 'c':
        cout << "Temperature in Fahrenheit: " << celsiusToFahrenheit(temperature) << " F\n";
        cout << "Temperature in Kelvin    : " << celsiusToKelvin(temperature) << " K\n";
        break;
    case 'F':
    case 'f':
        cout << "Temperature in Celsius: " << fahrenheitToCelsius(temperature) << " C\n";
        cout << "Temperature in Kelvin : " << fahrenheitToKelvin(temperature) << " K\n";
        break;
    case 'K':
    case 'k':
        cout << "Temperature in Celsius   : " << kelvinToCelsius(temperature) << " C\n";
        cout << "Temperature in Fahrenheit: " << kelvinToFahrenheit(temperature) << " F\n";
        break;
    default:
        cout << "Invalid Unit Selected!\n";
        break;
    }

    return 0;
}

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}
float celsiusToKelvin(float celsius) {
    return celsius + 273.15;
}

float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}
float fahrenheitToKelvin(float fahrenheit) {
    return (fahrenheit + 459.67) * 5 / 9;
}

float kelvinToCelsius(float kelvin) {
    return kelvin - 273.15;
}
float kelvinToFahrenheit(float kelvin) {
    return kelvin * 9 / 5 - 459.67;
}