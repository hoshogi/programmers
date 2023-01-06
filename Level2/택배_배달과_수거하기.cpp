/*
Title   : 택배 배달과 수거하기
Author  : Hoseok Lee
Date    : 2023/01/06
https://school.programmers.co.kr/learn/courses/30/lessons/150369
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

long long solution(int cap, int n, vector<int> deliveries, vector<int> pickups) {
    long long answer = 0;
    int delivery = deliveries.size() - 1;
    int pickup = pickups.size() - 1;

    while (delivery > -1 || pickup > -1) {
        int maxDelivery = 0, maxPickup = 0;

        if (delivery > -1) {
            int numOfDelivery = 0;
            while (delivery > -1 && deliveries[delivery] == 0)
                delivery--;
            maxDelivery = delivery + 1;

            while (numOfDelivery + deliveries[delivery] <= cap) {
                numOfDelivery += deliveries[delivery];
                deliveries[delivery] = 0;
                delivery--;

                if (delivery == -1)
                    break;
            }
            
            if (delivery > -1 && numOfDelivery < cap) {
                deliveries[delivery] -= cap - numOfDelivery;
                numOfDelivery = cap;
            }
        }

        if (pickup > -1) {
            int numOfPickup = 0;
            while (pickup > -1 && pickups[pickup] == 0) 
                pickup--;
            maxPickup = pickup + 1;

            while(numOfPickup + pickups[pickup] <= cap) {
                numOfPickup += pickups[pickup];
                pickups[pickup] = 0;
                pickup--;

                if (pickup == -1)
                    break;
            }

            if (pickup > -1 && numOfPickup < cap) {
                pickups[pickup] -= cap - numOfPickup;
                numOfPickup = cap;
            }
        }

        answer += 2 * max(maxDelivery, maxPickup);
    }

    return answer;
}