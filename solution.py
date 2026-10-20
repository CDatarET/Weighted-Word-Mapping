class Solution:
    def mapWordWeights(self, words: List[str], weights: List[int]) -> str:
        sb = []
        for word in words:
            val = 0
            for i in range(len(word)):
                val += weights[ord(word[i]) - ord('a')]
            
            sb.append(chr(ord('z') - val % 26))

        return "".join(sb)
