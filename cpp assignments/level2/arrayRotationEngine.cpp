#include <iostream>
#include <vector>
#include <algorithm> // for reverse

using namespace std;

// Function to rotate left by K positions
void rotateLeft(vector<int> &arr, int k)
{
    int n = arr.size();
    k = k % n;                             // handle cases where k >= n
    reverse(arr.begin(), arr.begin() + k); // Step 1: reverse first k elements
    reverse(arr.begin() + k, arr.end());   // Step 2: reverse remaining elements
    reverse(arr.begin(), arr.end());       // Step 3: reverse whole array
}

// Function to rotate right by K positions
void rotateRight(vector<int> &arr, int k)
{
    int n = arr.size();
    k = k % n;                           // handle cases where k >= n
    reverse(arr.begin(), arr.end() - k); // Step 1: reverse first n-k elements
    reverse(arr.end() - k, arr.end());   // Step 2: reverse last k elements
    reverse(arr.begin(), arr.end());     // Step 3: reverse whole array
}

int main()
{
    int N, K;
    cout << "Enter size of array (N): ";
    cin >> N;
    cout << "Enter rotation value (K): ";
    cin >> K;

    vector<int> arr(N);
    cout << "Enter " << N << " elements: ";
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    // Rotate Left
    vector<int> leftArr = arr;
    rotateLeft(leftArr, K);
    cout << "Array after left rotation by " << K << ": ";
    for (int x : leftArr)
        cout << x << " ";
    cout << endl;

    // Rotate Right
    vector<int> rightArr = arr;
    rotateRight(rightArr, K);
    cout << "Array after right rotation by " << K << ": ";
    for (int x : rightArr)
        cout << x << " ";
    cout << endl;

    return 0;
}
