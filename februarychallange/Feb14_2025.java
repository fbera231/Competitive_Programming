class ProductOfNumbers {
    public ArrayList<Integer> nums;
    public int product=1; 
    public ProductOfNumbers() {
        nums= new ArrayList<>();
    }
  
    public void add(int num) {
        if(num == 0){
            nums= new ArrayList<>();
            product=1;
        }else{
            product*=num;
            nums.add(product);
        }
            
    }

    public int getProduct(int k) {
        if(k>nums.size()) return 0;
        if(k== nums.size()) return nums.get(nums.size()-1);
        return nums.get(nums.size()-1) / nums.get(nums.size()-k-1);
    }
}
/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers obj = new ProductOfNumbers();
 * obj.add(num);
 * int param_2 = obj.getProduct(k);
 */
//https://leetcode.com/problems/product-of-the-last-k-numbers/
