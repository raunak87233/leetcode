int arrangeCoins(int n) {
        int level = 0, coin = 1;
        while (n >= coin) {
            n -= coin;
            coin++;
            level++;
        }
        return level;
    }
