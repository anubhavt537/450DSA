    // Sort the intervals based on the start times
        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[0] < b[0];
        });
        
        vector<vector<int>> merged;
        if (intervals.empty()) return merged;

        // Initialize the start and end of the first interval
        int start = intervals[0][0];
        int end = intervals[0][1];
        
        for (int i = 1; i < intervals.size(); ++i) {
            int s = intervals[i][0];
            int e = intervals[i][1];
            if (s <= end) {
                // Overlapping intervals, merge them
                end = max(end, e);
            } else {
                // Non-overlapping interval, push the previous one and update start and end
                merged.push_back({start, end});
                start = s;
                end = e;
            }
        }
        
        // Add the last interval
        merged.push_back({start, end});
        
        return merged;