#include <iostream>

enum CardRank
{
    CARD_2,
    CARD_3,
    CARD_4,
    CARD_5,
    CARD_6,
    CARD_7,
    CARD_8,
    CARD_9,
    CARD_10,
    CARD_JACK,
    CARD_QUEEN,
    CARD_KING,
    CARD_ACE
};

enum CardSuit
{
    SUIT_CLUBS,
    SUIT_DIAMONDS,
    SUIT_HEARTS,
    SUIT_SPADES
};

struct Card
{
    CardRank rank;
    CardSuit suit;
};

void printCard(const Card &card)
{
    switch (card.rank)
    {
        case CARD_2:
            std::cout << "2";
            break;
        case CARD_3:
            std::cout << "3";
            break;
        case CARD_4:
            std::cout << "4";
            break;
        case CARD_5:
            std::cout << "5";
            break;
        case CARD_6:
            std::cout << "6";
            break;
        case CARD_7:
            std::cout << "7";
            break;
        case CARD_8:
            std::cout << "8";
            break;
        case CARD_9:
            std::cout << "9";
            break;
        case CARD_10:
            std::cout << "10";
            break;
        case CARD_JACK:
            std::cout << "J";
            break;
        case CARD_QUEEN:
            std::cout << "Q";
            break;
        case CARD_KING:
            std::cout << "K";
            break;
        case CARD_ACE:
            std::cout << "A";
            break;
    };

    switch (card.suit)
    {
        case SUIT_CLUBS:
            std::cout << "C\n";
            break;
        case SUIT_DIAMONDS:
            std::cout << "D\n";
            break;
        case SUIT_HEARTS:
            std::cout << "H\n";
            break;
        case SUIT_SPADES:
            std::cout << "S\n";
            break;
    };
}

int main ()
{
    Card myCard;
    myCard.rank = CARD_ACE;
    myCard.suit = SUIT_SPADES;
    printCard(myCard);

    return 0;
}
