#include <iostream>
#include <climits>
using namespace std;

void miniMaxSum(int arr[5]) {
    long long total = 0;
    int minVal = INT_MAX;
    int maxVal = INT_MIN;

    for (int i = 0; i < 5; i++) {
        total += arr[i];
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }

    long long minSum = total - maxVal;
    long long maxSum = total - minVal;

    cout << minSum << " " << maxSum << endl;
}

int main() {
    int arr[5];
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    miniMaxSum(arr);
    return 0;
}
