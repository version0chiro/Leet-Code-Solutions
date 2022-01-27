class Solution {
public:
    int printDivisors(int n)
    {
	// Vector to store half of the divisors
        int c=0,s=0;
	vector<int> v;
	for (int i = 1; i <= sqrt(n); i++) {
		if (n % i == 0) {

			// check if divisors are equal
			if (n / i == i){
                printf("%d ", i);
                s=s+i;
                c++;
            }
				
			else {
				printf("%d ", i);
                c++;
                s=s+i;
                

				// push the second divisor in the vector
				v.push_back(n / i);
			}
		}
	}

	// The vector will be printed in reverse
	for (int i = v.size() - 1; i >= 0; i--){
        printf("%d ", v[i]);
        s=s+v[i];
        c++;
    }
		
        if(c==4) return s;
        return 0;
    }
    
    int sumFourDivisors(vector<int>& nums) {
        int ans=0;
        for(auto a:nums){
            ans=ans+printDivisors(a);
        }
        
        return ans;
    }
};