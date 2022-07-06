class Solution {
public:
    int countPrimes( int n)
    {
        int count =0;
        vector<bool> prime(n+1,true);
    
        prime[0]=false;
        prime[1]=false;
    
        for(int i=2;i<n;i++)
        {
            if(prime[i])
            {
                count++;
                for(int j=2*i;j<n;j=j+i)
                {
                    prime[j]=0;
                }
            }
        }
        return count;
    }
    
    /*bool isprime( int n)
    {
        if( n == 2 || n == 3)
            return true;
        if( n%2==0 || n%3 == 0 || n<2)
            return false;
        for( int i=3; i<=n/i; i+= 2)
        {
            if( n%i == 0)
                return false;
        }
        return true;
    }
    
    int countPrimes(int n) {
        if( n < 2)
            return 0;
        int count = 0;
        for(int i=2; i<n; i++)
            if( isprime(i))
                count++;
    return count;
    }*/
};