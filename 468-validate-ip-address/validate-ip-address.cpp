class Solution {
public:
    string validIPAddress(string IP) {
        regex ipv4("(([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])\\.){3}([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])"), ipv6("((([0-9a-fA-F]){1,4})\\:){7}([0-9a-fA-F]){1,4}");   // create regex object for regulare expression
        
        if(regex_match(IP, ipv4)) 
            return "IPv4";
        else if(regex_match(IP, ipv6)) 
            return "IPv6";

        return "Neither";








        // int n=queryIP.size();
        // int num

        // if(n>=7 && n<=15){  //check for IPv4
        //     for(int i=0;i<n;i++){
        //         if(queryIP[i]=='.'){

        //         }
        //     }

        // }
        // else if(n>=15 && n<=39){  //check for IPv6 

        // }

        // return "Neither";
    }
};