#include <iostream>
#include <vector>
#include <algorithm>

struct Interval {
    int start;
    int end;

    Interval(int s, int e) : start(s), end(e) {}
};

bool compareIntervals(const Interval& a, const Interval& b) {
    return a.start < b.start;
}

std::vector<Interval> mergeIntervals(std::vector<Interval>& intervals) {
    if (intervals.empty()) {
        return {};
    }

    std::sort(intervals.begin(), intervals.end(), compareIntervals);

    std::vector<Interval> mergedIntervals;
    mergedIntervals.push_back(intervals[0]);

    for (int i = 1; i < intervals.size(); ++i) {
        if (intervals[i].start <= mergedIntervals.back().end) {
            
            mergedIntervals.back().end = std::max(mergedIntervals.back().end, intervals[i].end);
        } else {
            
            mergedIntervals.push_back(intervals[i]);
        }
    }

    return mergedIntervals;
}

void printIntervals(const std::vector<Interval>& intervals) {
    for (const auto& interval : intervals) {
        std::cout << "[" << interval.start << ", " << interval.end << "] ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<Interval> intervals = { {1, 3}, {2, 6}, {8, 10}, {15, 18} };

    std::cout << "Original Intervals: ";
    printIntervals(intervals);

    std::vector<Interval> mergedIntervals = mergeIntervals(intervals);

    std::cout << "Merged Intervals: ";
    printIntervals(mergedIntervals);

    return 0;
}
