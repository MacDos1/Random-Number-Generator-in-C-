#include<iostream>
#include<climits>

class Random{
    private:
        long seed = 0;
    public:
        Random(long seed){
            srand(seed);
            this -> seed = seed;
        }
        Random(){
            srand(time(NULL));
        }
        void setSeed(long seed){
            srand(seed);
            this -> seed = seed;
        }
        int nextInt(int upperBound){
            return std::rand() % upperBound;
        }
        int nextInt(int lowerBound, int upperBound){
            int num = lowerBound + (std::rand() % upperBound);
            return num;
        }
        int nextInt(){
            int num = std::rand();
            int sign = std::rand() % 2;
            if(sign == 0){
                num = -1 * num;
            }
            return num;
        }
        long getSeed(){
            return this -> seed;
        }
        double nextDouble(){
            return std::rand()/(double)INT_MAX;
        }
        bool nextBoolean(){
            return std::rand() % 2;
        }
};