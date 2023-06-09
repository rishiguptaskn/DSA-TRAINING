class Solution {

    int search(String pat, String txt) {
        // code here
      int[] countTxt = new int[256];
        int[] countPath = new int[256];
        int ans=0;
        for(int i=0;i<pat.length();i++){
            countPath[pat.charAt(i)]++;
        }
        for(int i=0;i<pat.length();i++){
            countTxt[txt.charAt(i)]++;
        }
        int low = 0;
        int high = pat.length();
        while(high<txt.length()){
            if(Arrays.equals(countTxt,countPath)){
                ans++;
            }
            countTxt[txt.charAt(high)]++;
            countTxt[txt.charAt(low)]--;
            high++;
            low++;
        }
        if(Arrays.equals(countTxt,countPath)){
            ans++;
        }
        return ans;
    }
}
0 comments on commit 9f73446
@rishiguptaskn
 
