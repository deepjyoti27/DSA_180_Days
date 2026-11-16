class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
     int count=0;
     int size=flowerbed.size();
     for(int i=0;i<size;i++){
        //check whether current plot is empty
        if(flowerbed[i]==0){
            //check left and right neighbours
            bool leftEmpty=(i==0||flowerbed[i-1]==0);
            bool rightEmpty=(i==size-1 || flowerbed[i+1]==0);
            //if both the nebhours are empty, plant a flower
            if(leftEmpty && rightEmpty){
                flowerbed[i]=1;
                count++;
                //we have planted all required flowers
                if(count>=n){
                    return true;
                }
            }
        }
     }   
        return count>=n;
    }
};