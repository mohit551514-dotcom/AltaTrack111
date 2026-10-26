
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int years = N / 365;
    int remainingDays = N % 365;

    int months = remainingDays / 30;
    int days = remainingDays % 30;

    cout << years << " years, "
         << months << " months, "
         << days << " days";

    return 0;
}
