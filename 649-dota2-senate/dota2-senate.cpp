class Solution {
public:
    string predictPartyVictory(string s) {
        queue<int> q;
        queue<int> r;
        queue<int> d;
        for(int i=0;i<s.length();i++){
            q.push(i);
            if(s[i]=='R') r.push(i);
            else d.push(i);
        }
        while(q.size()>1){
            if(s[q.front()]=='X') q.pop();
            else if(s[q.front()]=='R'){
                if(d.size()==0) return "Radiant";
                else{
                    s[d.front()]= 'X';
                    d.pop();
                    q.push(q.front());
                    q.pop();
                    r.push(r.front());
                    r.pop();
                }
            }
            else{
                if(r.size()==0) return "Dire";
            
            else {
                 s[r.front()]='X';
                    r.pop();
                    q.push(q.front());
                    q.pop();
                    d.push(d.front());
                    d.pop();
               }
            }
        } 
        if(s[q.front()]=='R') return "Radiant";  
        else return "Dire";
    }
};