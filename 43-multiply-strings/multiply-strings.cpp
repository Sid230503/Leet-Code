class Solution {
public:
string strsum(string str1,string str2)
{
    string res;
    int n1=str1.size(),n2=str2.size();
    int i=n1-1,j=n2-1,carry=0;
    while(i>=0 || j>=0 || carry>0)
    {
        int d1=i>=0?str1[i--]-'0':0;
        int d2=j>=0?str2[j--]-'0':0;
        int sum=d1+d2+carry;
        carry=sum/10;
        sum%=10;
        res=to_string(sum)+res;
    }
    return res;
}
    string multiply(string num1, string num2) {
        if(num1=="0" || num2=="0")
        return "0";
        string ans;
        int n1=num1.size(),n2=num2.size();
        for(int i=n1-1;i>=0;i--)
        {
            string res(n1-1-i,'0');
            int carry=0;
            for(int j=n2-1;j>=0;j--)
            { 
                int mul=(num1[i]-'0')*(num2[j]-'0')+carry;
                carry=mul/10;
                mul=mul%10;
                res=to_string(mul)+res;
            }
            if(carry)
            res=to_string(carry)+res;
            ans=strsum(ans,res);
        }
        return ans;
    }
};