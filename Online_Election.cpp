class TopVotedCandidate {
public:
    vector<int> time;
    vector<int> majority;
    TopVotedCandidate(vector<int>& persons, vector<int>& times) {
        vector<int> hashTable(persons.size(),0);
        hashTable[persons[0]]++;
        majority.push_back(persons[0]);
        time.push_back(times[0]);
        for(int i=1;i<persons.size();i++)
        {
            time.push_back(times[i]);
            hashTable[persons[i]]++;
            if(hashTable[persons[i]] >= hashTable[majority[i-1]])
                majority.push_back(persons[i]);
            else
                majority.push_back(majority[i-1]);
        }
    }
    
    int q(int t) {
        int l = 0, h = time.size()-1, mid;
        while(l<=h)
        {
            mid = (l+h)/2;
            if(time[mid] == t)
                return majority[mid];
            else if(time[mid] > t)
                h = mid - 1;
            else
                l = mid + 1;
        }
        return majority[l-1];
    }
};

/**
 * Your TopVotedCandidate object will be instantiated and called as such:
 * TopVotedCandidate* obj = new TopVotedCandidate(persons, times);
 * int param_1 = obj->q(t);
 */
