#include <iostream>
using namespace std;

string HighestTemp(const int SIZE, const string DAYS[], double TEMP[]) {
    double bigest_temp = 0;
    int h_t_d = 0; // Highest Temprature Day

    for (int i = 0; i < SIZE; i++) {
        if (TEMP[i] > bigest_temp) {
            bigest_temp = TEMP[i];
            h_t_d = i;
        }
    }

    return DAYS[h_t_d];
}

double AverageTemp(const int SIZE, double TEMP[]) {
    double average_temp = 0;
    for (int i = 0; i < SIZE; i++) {
        average_temp += TEMP[i];
    }
    average_temp /= SIZE;

    return average_temp;
}

int main()
{
    const int WEEK_ARR = 7;
    string days[WEEK_ARR] = { "Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    double arr[WEEK_ARR] = {15.6, 12.8, 17.9, 14.2, 16.6, 18.1, 17.2};

    cout << "Highest temperature day: " << HighestTemp(WEEK_ARR, days, arr) << endl;
    cout << "Average temperature within week: " << AverageTemp(WEEK_ARR, arr) << endl;
}
