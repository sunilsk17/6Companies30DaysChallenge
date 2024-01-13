/* https://leetcode.com/problems/sort-characters-by-frequency/description/ */
//Solution - Sort Characters By Frequency
class Solution {
public:
    static bool compare(pair<char, int> a, pair<char, int> b) {
        return a.second > b.second;
    }

    string frequencySort(string s) {
        map<char, int> mp;
        for (char c : s) {
            mp[c]++;
        }

        //Convert the map to a vector of pairs for sorting
        vector<pair<char, int>> charFrequencyVector(mp.begin(), mp.end());

        //Sort the vector based on frequency
        sort(charFrequencyVector.begin(), charFrequencyVector.end(), compare);

        //Construct the sorted string
        string sortedString;
        for (auto pair : charFrequencyVector) {
            sortedString +=string(pair.second, pair.first);
        }

        return sortedString;
    }
};
