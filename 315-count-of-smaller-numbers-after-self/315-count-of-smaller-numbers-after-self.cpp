class Solution {
public:
    void merge(vector<int>& arr, int l, int mid, int r,vector<pair<int,int>>& v,vector<int>& count)
    {
         // Your code here
        vector<pair<int,int>> temp(r-l+1);
        int i = l;
        int j= mid + 1;
        int k = 0;
        
        while(i<=mid && j<=r){                                                    // Step 4
            if(v[i].first<=v[j].first) temp[k++] = v[j++];
            else{
                count[v[i].second] += r-j+1;
                temp[k++] = v[i++];
            }
        }
        
        while(i<=mid){
            temp[k++] = v[i++];
        }
        while(j<=r){
            temp[k++] = v[j++];
        }
        
        for(int i=l;i<=r;i++){
            v[i] = temp[i-l];
        }
    }
    void mergeSort(vector<int>& arr, int l, int r,vector<pair<int,int>>& v,vector<int>& count)
    {
        //code here
        if(l>=r) return ;
        int mid = (l+r)/2;
        mergeSort(arr,l,mid,v,count);
        mergeSort(arr,mid+1,r,v,count);
        merge(arr,l,mid,r,v,count);
    }
    
    vector<int> countSmaller(vector<int>& nums) {
        int n = nums.size();
        vector<pair<int,int>> v(n);                                        // step 1
        for(int i=0;i<n;i++) v[i] = {nums[i],i};
        vector<int> count(n,0);                                             // step 2
        mergeSort(nums,0,n-1,v,count);                                // step 3
       // for(int i=0;i<n;i++) cout<<v[i].first<<" ";
        return count;
    }
};


/*class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        vector<int>v;
        int temp = 0, pos;
        int m = *min_element( nums.begin(), nums.end());
        
        for( int i=0; i<n; i++)
        {
            if( nums[i] == m)
                continue;
            else
            {
                temp = nums[i];
                pos = i;
                break;
            }
        }
        cout<<m<<" "<<temp;
        for( int i=pos; i<n; i++)
        {
            if( nums[i] < temp)
                count++;
        }
        cout<<count;
        for( int i=0; i<n; i++)
        {
            if( nums[i] == m)
            {
                v.push_back(0);
                if( i > pos)
                    count--;
            }
            else if( nums[i] > temp)
                v.push_back(count);
            else if( nums[i] == temp)
                v.push_back(count);
            else
            {
                count--;
                v.push_back(count);
            }
        }
        // for( int i=0; i<n; i++)
        // {
        //     int count = 0;
        //     for( int j = i+1; j<n; j++)
        //     {
        //         if( nums[j] < nums[i])
        //             count++;
        //     }
        //     v.push_back(count);
        // }
        return v;
    }
};*/