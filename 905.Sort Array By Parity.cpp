class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int head = 0;
        int rear = A.size()-1;
        while(head < rear)
        {
            while((A[head]%2==0) && (head < rear)) head++;
            while((A[rear]%2==1) && (head < rear)) rear--;
            if(head < rear)
                swap(A[head++],A[rear--]);
        }
        return A;

    }
};
/*
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int i = 0;
        int j = A.size()-1;
        while (i < j) {
            if (A[i] % 2 > A[j] % 2) {
                swap(A[i], A[j]);
            }
            if (A[i] % 2 == 0) {
                i++;
            }
            if (A[j] % 2 == 1) {
                j--;
            }
        }
        return A;
    }
};
*/