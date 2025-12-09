// Last updated: 09/12/2025, 23:23:30
class Solution {
public:
    int findDelayedArrivalTime(int a, int d) {
        return (a+d)%24;
    }
};