answer-5:

int distanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
    int distance = 0;

    for (int num1 : arr1) {
        bool valid = true;
        for (int num2 : arr2) {
            if (abs(num1 - num2) <= d) {
                valid = false;
                break;
            }
        }
        if (valid) {
            distance++;
        }
    }

    return distance;
}

