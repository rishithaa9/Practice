#389
class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        result={}
        for i in s:
            if i in result:
                result[i]+=1
            else:
                result[i]=1
        for i in t:
            if i not in result or result[i]==0:
                return i
            result[i]-=1