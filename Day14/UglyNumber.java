class Solution {
    public int nthUglyNumber(int n) {
        int p[] = new int[3];
        int[] v = new int[n];
        v[0] = 1;
        for(int i=1; i<n; i++) {
            v[i] = Math.min(2*v[p[0]],Math.min(3*v[p[1]],5*v[p[2]]));
            if(v[i]== 2*v[p[0]])
                p[0]++;
            if(v[i]== 3*v[p[1]])
                p[1]++;
            if(v[i]== 5*v[p[2]])
                p[2]++; 
        }   
        return v[n-1];
    }
}