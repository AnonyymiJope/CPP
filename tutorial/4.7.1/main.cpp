#include <iostream>

struct Ads {
    int amount = 0;
    double clicked = 0;
    double profit = 0;
};

void calculate(Ads ads) {
    std::cout << "Amount of ads: " << ads.amount << std::endl;
    std::cout << "Ads clicked (%): " << ads.clicked << std::endl;
    std::cout << "Earnings per ad (EUR): " << ads.profit << std::endl;
    std::cout << "You have earned in total (EUR): " <<
        (ads.amount * ads.clicked / 100 * ads.profit) << std::endl;
}

int main() {
    Ads myAds;

    std::cout << "Enter number of ads: ";
    std::cin >> myAds.amount;
    std::cout << "Enter persentage of clicked ads: ";
    std::cin >> myAds.clicked;
    std::cout << "Enter average profit per ad: ";
    std::cin >> myAds.profit;

    calculate(myAds);

    return 0;
}
