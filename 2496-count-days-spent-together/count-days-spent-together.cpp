class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        string start = max(arriveAlice, arriveBob);
        string end = min(leaveAlice, leaveBob);

        if (start > end)return 0;

        int m1= stoi(start.substr(0,2)), d1 = stoi(start.substr(3,2));
        int m2 = stoi(end.substr(0,2)), d2 = stoi(end.substr(3,2));

        vector<int> dayInMonth = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        if(m1 == m2){
            return d2 - d1 +1;
        }

        int result = (dayInMonth[m1-1]-d1+1)+d2;
        for(int m = m1+1; m< m2; ++m){
            result += dayInMonth[m-1];
        }
        return result;
    }
};