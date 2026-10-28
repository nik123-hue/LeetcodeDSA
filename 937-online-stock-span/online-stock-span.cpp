class StockSpanner {
    vector<int> arr;
public:
    StockSpanner() {
    }
    
    int next(int price) {
        arr.push_back(price);
        int count = 1;
        for(int i=arr.size()-2;i>=0;i--){
            if(arr[i]<=price) count++;
            else
            break;
        }
        return count;
    }
};