
public class CardCompare {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		 DeckOfCards deck = new DeckOfCards();
	        deck.shuffle();

	        // Deal two five-card hands
	        Card[] hand1 = new Card[5];
	        Card[] hand2 = new Card[5];
	        for (int i = 0; i < 5; i++) {
	            hand1[i] = deck.dealCard();
	            hand2[i] = deck.dealCard();
	        }

	        // Display hands
	        System.out.println("Hand 1:");
	        displayHand(hand1);
	        System.out.println("Hand 2:");
	        displayHand(hand2);

	        // Evaluate hands
	        int hand1Rank = evaluateHand(deck, hand1);
	        int hand2Rank = evaluateHand(deck, hand2);

	        // Determine the winner
	        if (hand1Rank > hand2Rank) {
	            System.out.println("Hand 1 wins!");
	        } else if (hand2Rank > hand1Rank) {
	            System.out.println("Hand 2 wins!");
	        } else {
	            System.out.println("It's a tie!");
	        }
	    }

	    // Display a hand of cards
	    private static void displayHand(Card[] hand) {
	        for (Card card : hand) {
	            System.out.println(card);
	        }
	        System.out.println();
	    }

	    // Evaluate a hand and return a rank based on poker hand hierarchy
	    private static int evaluateHand(DeckOfCards deck, Card[] hand) {
	        if (deck.hasFourOfAKind(hand)) return 7;
	        if (deck.hasFullHouse(hand)) return 6;
	        if (deck.hasFlush(hand)) return 5;
	        if (deck.hasStraight(hand)) return 4;
	        if (deck.hasThreeOfAKind(hand)) return 3;
	        if (deck.hasTwoPairs(hand)) return 2;
	        if (deck.hasPair(hand)) return 1;
	        return 0; // High card
	}

}
