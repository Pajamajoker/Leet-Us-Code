class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
    
    vector<vector<int>> mergedIntervals;
        
    if(intervals.size()==0)
        return mergedIntervals;
        
    sort(intervals.begin(),intervals.end());
    
    vector<int> curInterval = intervals[0];
    for(int i=0;i<intervals.size();i++)
    {
        if(intervals[i][0] <= curInterval[1]) //merge possible
            curInterval[1] = max(curInterval[1], intervals[i][1]);
        
        else
        {
            mergedIntervals.push_back(curInterval);
            curInterval = intervals[i];
        }
    }
        mergedIntervals.push_back(curInterval);
        
        return mergedIntervals;
    }
};