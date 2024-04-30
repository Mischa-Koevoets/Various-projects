#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

//excercise 1
/*int main() {
    double sales = 95000;
    cout << "Sales: $" << sales << endl;

    const double st_tax_rate = .04;
    double st_tax = sales * st_tax_rate;
    cout << "State Tax : $" << st_tax << endl;

    const double cnt_tax_rate = .02;
    double cnt_tax = sales * cnt_tax_rate;
    cout << "County Tax : $" << cnt_tax << endl;

    double total_tax = st_tax + cnt_tax;
    cout << "Total Tax: $" << total_tax;



    return 0;
}*/

//excercise 2
/*int main() {
    cout << "Enter temp in f: ";
    double farenheit;
    cin >> farenheit;
    double result = (farenheit - 32) * 5/9;
    cout << "Temp in C: " << result;
    return 0;
}*/

//excercise 3
int main() {
    const short minValue = 1;
    const short maxValue = 6;

    srand(time(0));

    short first = (rand() % (maxValue - minValue + 1)) + minValue;
    short second = (rand() % (maxValue - minValue + 1)) + minValue;

    cout <<first << ", " << second;
}