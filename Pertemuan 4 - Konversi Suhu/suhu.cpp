#include <iostream>
using namespace std;

string sayHello(string nama);

void celciusToKelvinFahrenheit(double celcius, double* kelvin, double* fahrenheit){
    *kelvin = celcius + 273.15;
    *fahrenheit = celcius * 9/5 + 32;
}
void celciusToKelvin(double celcius, double* kelvin){
    *kelvin = celcius + 273.15;
}

double celciusToFahrenheit(double celcius){
    return celcius * 9/5 + 32;
}

int main() {
    double celcius, kelvin, fahrenheit;
    cout << "Masukkan suhu dalam Celcius: ";
    cin >> celcius;
    celciusToKelvin(celcius, &kelvin);
    fahrenheit = celciusToFahrenheit(celcius);
    cout << "Suhu dalam Kelvin: " << kelvin << endl;
    cout << "Suhu dalam Fahrenheiut: " << fahrenheit << endl;

    return 0;
}

string sayHello(string nama){
    return "Hallo " + nama;
}
