/* https://www.geeksforgeeks.org/problems/find-missing-and-repeating2512/1 */
//Solution - Find Missing And Repeating
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int N) {
        // code here //x-rep num,  y-missing num
        long long n=(long long)N;
        long long s=0,s2=0;
        long long sn=n*(n+1)/2;
        long long s2n=(n*(n+1)*(2*n+1))/6;
        for(int i=0;i<n;i++){
            s+=arr[i];
            s2+=(long long)(arr[i])*(long long)(arr[i]);
        }
        long long val1=s-sn;//x-y
        long long val2=s2-s2n;//x2-y2
        val2=val2/val1;//x+y
        long long x=(val1+val2)/2;//2x/2
        long long y=val2-x;
        return {(int)x,(int)y};
    }
};
