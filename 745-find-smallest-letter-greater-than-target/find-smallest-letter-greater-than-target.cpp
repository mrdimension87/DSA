class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int minima = (int) target;
        int Maxima = INT_MAX;
        int ind = 0;
        for(int i = 0; i<letters.size(); i++){
            if((int)letters[i] > minima && (int)letters[i] <= Maxima){
                Maxima = min((int)letters[i], Maxima);
                ind = i;
            }
        }
        return letters[ind];
    }
};