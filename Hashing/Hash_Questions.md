# Hashing Questions

## Question 1:

> https://www.naukri.com/code360/problems/maximum-frequency-number_920319?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar&leftPanelTabValue=PROBLEM

## Code:

```C++
int maximumFrequency(vector<int> &arr, int n)
{
    unordered_map<int , int> occurance;

    int maxFreq = 0;
    int maxAns = 0;

    for(int i = 0; i < arr.size(); i++){
            occurance[arr[i]]++;
            maxFreq = max(maxFreq, occurance[arr[i]]);
    }

    for(int i = 0; i < arr.size(); i++){
        if(maxFreq == occurance[arr[i]]){
            maxAns =arr[i];
            break;
        }
    }

    return maxAns;
}
```

## Question 2:
