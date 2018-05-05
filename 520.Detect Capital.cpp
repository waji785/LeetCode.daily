class Solution {
public:
    bool detectCapitalUse(string word) {
		int size=word.size(),count=0;
		if(size<=1)
			return true;
		for (int i = 1; i < size; i++){
			if(word[i]>='a'&&word[i]<='z')//不判断第一位
				count+=1;
			else
				count+=2;
		}
		if(count==size-1)//都是小写
			return true;
		else if(count==2*(size-1))//都是大写，判断首位
			return word[0]>='A'&&word[0]<='Z';
		else 
			return false;
    }
};