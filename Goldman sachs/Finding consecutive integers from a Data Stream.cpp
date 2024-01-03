/* https://leetcode.com/problems/find-consecutive-integers-from-a-data-stream/ */
//Solution -  Find Consecutive Integers from a Data Stream

class DataStream {
public:
    int value,k,k2;
    DataStream(int value, int k) {
        this->value=value;
        this->k=k;
        k2=k;

    }
    
    bool consec(int num) {
        if(num==value){
            k2--;
            if(k2<=0){
                return true;
            }
        }else{
            k2=k;
        }
        return false;
    }
};

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */
