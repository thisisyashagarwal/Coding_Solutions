class
    MyCalendar {
        map<int, int> mp;   // <endTime, statIme>
    public:  
        bool book(int start, int end) 
        {
/*look for first endTIme that is larger than start time request. First condition checkes if the incoming request should be added to the list of booked slots.*/
            auto itr = mp.upper_bound(start);
            if(itr == mp.end() || end<= itr->second) 
            {
                mp[end]=start;
                return true;
            }
            else  
                return false;
        }
};



/*class MyCalendar {
public:
    MyCalendar() {
      //  MyCalendar* obj = new MyCalendar();
        //bool param_1 = obj->book(start,end); 
    }
    
    int start1 = INT_MAX, end1 = 0;
    bool book(int start, int end) {
        cout<<start<<" "<<start1<<" "<<end<<" "<<end1<<"\n";
        if( start >= end1 || end <= start1)
        {
            end1 = max(end1, end);
            start1 = min( start1, start);
            return true;
        }
        else
            return false;
    }
};
*/
/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */