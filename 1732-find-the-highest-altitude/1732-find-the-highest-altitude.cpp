class Solution {
public:
    int largestAltitude(vector<int>& gain) {

        int point =0;
        int n = gain.size();

        int highest_altitude = 0;

        for(int i =0;i<n;i++){
            point = point + gain[i];
            highest_altitude = max(point,highest_altitude);
        }
        return highest_altitude;

        
    }
};