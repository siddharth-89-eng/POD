class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int freq[10] = {};

        for(int x : digits)
            freq[x]++;

        int ans = 0;

        for(int num = 100; num <= 999; num++) {

            if(num % 2 != 0)
                continue;

            int a = num / 100;
            int b = (num / 10) % 10;
            int c = num % 10;

            int temp[10];

            for(int i = 0; i < 10; i++)
                temp[i] = freq[i];

            if(temp[a] == 0)
                continue;
            temp[a]--;

            if(temp[b] == 0)
                continue;
            temp[b]--;

            if(temp[c] == 0)
                continue;

            ans++;
        }

        return ans;
    }
};