class Solution {
public:
    int winner(vector<int> &person,int index,int n,int person_left,int k){
        if(person_left==1){
            for(int i=0;i<n;i++){
                if(person[i]==0){
                    return i+1;
                }
            }
        }

        int kill=(k-1)%person_left;
        while(kill--){
            index=(index+1)%n;
            while(person[index]==1) index=(index+1)%n;
        }
        person[index]=1;
        while(person[index]==1){
            index=(index+1)%n;
        }
        return winner(person,index,n,person_left-1,k);

    }
    int findTheWinner(int n, int k) {
        vector<int>person(n,0);
        return winner(person,0,n,n,k);
    }
};