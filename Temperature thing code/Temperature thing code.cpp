#include <iostream>
using namespace std;

int main()
{
    const int WEEK_ARR = 7;
    string days[WEEK_ARR] = { "Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    double arr[WEEK_ARR] = {15.6, 12.8, 17.9, 14.2, 16.6, 18.1, 17.2};

    double bigest_temp = 0;
    double average_temp = 1;
    int h_t_d = 0; // Highest Temprature Day

    for (int i = 0; i < WEEK_ARR; i++) {
        if (arr[i] > bigest_temp) {
            bigest_temp = arr[i];
            h_t_d = arr[i];
        }
    }
    cout << bigest_temp << endl << days[h_t_d] << endl;

    for (int i = 0; i < WEEK_ARR; i++) {
        average_temp += arr[i];
    }

}
