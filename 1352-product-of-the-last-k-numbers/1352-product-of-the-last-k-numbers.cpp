class ProductOfNumbers {
public:
    vector<int>arr;
    ProductOfNumbers() {
    }
    
    void add(int num) {
        arr.push_back(num);
    }
    
    int getProduct(int k) {
        int product = 1;
        int n = arr.size() - 1;
        while(k--){
            product *= arr[n--];
        }
        return product;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */