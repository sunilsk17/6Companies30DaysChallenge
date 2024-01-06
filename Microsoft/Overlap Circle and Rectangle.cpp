/* https://leetcode.com/problems/circle-and-rectangle-overlapping/description/ */
//Solution - Circle and Rectangle Overlapping
class Solution 
{
 public:
    bool checkOverlap(int r, int x, int y, int x1, int y1, int x2, int y2) 
    {
        for(int i=x1;i<=x2;i++){
           for(int j=y1;j<=y2;j++){
              int c1=i-x;
              int c2=j-y;
              if(c1*c1+c2*c2<=r*r){//x^2 + y^2 <=r^2
                  return true;
              }      
           }
        }
        return false;
    }
};
