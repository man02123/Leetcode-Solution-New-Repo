// Last updated: 08/12/2025, 17:31:36
class Solution {
public:
    int numWaterBottles(int bot, int ex) {
        int res=bot;
        int rem=0;
        while(bot%ex!=bot)
        {
            res+=(bot/ex);
            rem=bot%ex;
            bot=bot/ex;
            bot+=rem;
        }
        return res;
        
    }
};