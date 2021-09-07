//classifies a poker hand
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define num_ranks 13
#define num_suits 4
#define num_cards 5


void read_cards(void);
void analyze_hand(void);
void print_result(void);

int main(void)
{
	for (;;)
	{
		read_cards();
		analyze_hand();
		print_result();
	}
}

void read_cards(void)
{
	bool card_exists[num_ranks][num_suits];
	char ch, rank_ch, suit_ch;
	int rank, suit;
	bool bad_card;
	int cards_read = 0;

	for (rank = 0; rank < num_ranks; ++rank)
	{
		num_in_rank[rank] = 0;
		for (suit = 0; suit < num_suits; ++suit)
			card_exists[rank][suit] = false;
	}

	for (suit = 0; suit < num_suits; ++suit)
		num_in_suit[suit] = 0;

	while(cards_read < num_cards) {
		bad_card = false;

		printf("enter a card: ");

		rank_ch = getchar();

		switch (rank_ch) {
			case '0': exit(exit_success);
			case '2': rank = 0; break;
			case '3': rank = 1; break;
			case '4': rank = 2; break;
			case '5': rank = 3; break;
			case '6': rank = 4; break;
			case '7': rank = 5; break;
			case '8': rank = 6; break;
			case '9': rank = 7; break;
			case 't': case 't': rank = 8; break;
			case 'j': case 'j': rank = 9; break;
			case 'q': case 'q': rank = 10; break;
			case 'k': case 'k': rank = 11; break;
			case 'a': case 'a': rank = 12; break;
			default: bad_card = true;
		}

		suit_ch = getchar();
		switch (suit_ch) {
			case 'c': case 'c': suit = 0; break;
			case 'd': case 'd': suit = 1; break;
			case 'h': case 'h': suit = 2; break;
			case 's': case 's': suit = 3; break;
			default: bad_card = true;
		}

		while ((ch = getchar()) != '\n') 
			if (ch != ' ') bad_card = true;

		if (bad_card)
			printf("bad card; ignored.\n");
		else if (card_exists[rank][suit])
			printf("dupicate card; ignored.\n");
		else {
			num_in_rank[rank]++;
			num_in_suit[suit]++;
			card_exists[rank][suit] = true;
			cards_read++;
		}
	}
}

void analyze_hand(void)
{
	int num_consec = 0;
	int rank, suit;

	straight  = false;
	flush = false;
	four = false;
	three = false;
	pairs = 0;

	//check the flush 
	for (suit = 0; suit < num_suits; ++suit)
		if(num_in_suit[suit] == num_cards)
			flush = true;

	//check for straight
	rank = 0;
	while (num_in_rank[rank] == 0) rank++;
	for (; rank < num_ranks && num_in_rank[rank] > 0; ++rank)
		num_consec++;
	if (num_consec == num_cards) {
		straight = true;
		return ;
	}

	//check for 4-of-a-kind, 3-of-a-kind, and pairs
	for (rank = 0; rank < num_ranks; ++rank)
	{
		if (num_in_rank[rank] == 4) four = true;
		if (num_in_rank[rank] == 3) three = true;
		if (num_in_rank[rank] == 2) pairs++;
	}
}

void print_result(void)
{
	if (straight && flush) printf("straight flush");
	else if (four) printf("four of a kind");
	else if (three && pairs == 1) printf("full house");
	else if (flush) printf("flush");
	else if (straight) printf("straight");
	else if (three) printf("three of a kind");
	else if (pairs == 2) printf("two pairs");
	else if (pairs == 1) printf("pair");
	else printf("high card");

	printf("\n\n");
}
