class Solution {
    public String mapWordWeights(String[] words, int[] weights) {
        StringBuilder sb = new StringBuilder();
        for(String word : words){
            int val = 0;
            for(int i = 0; i < word.length(); i++){
                val += weights[word.charAt(i) - 'a'];
            }

            sb.append((char)('z' - val % 26));
        }

        return sb.toString();
    }
}
