import java.security.SecureRandom;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;

public class DeckOfCards {
    private static final SecureRandom randomNumbers = new SecureRandom();
    private static final int NUMBER_OF_CARDS = 52;
    private Card[] deck = new Card[NUMBER_OF_CARDS];
    private int currentCard = 0;
    
    // Card faces and suits
    private static final String[] faces = {"Ace", "Deuce", "Three", "Four", "Five", "Six",
                                           "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
    private static final String[] suits = {"Hearts", "Diamonds", "Clubs", "Spades"};
    
    // Constructor fills deck of Cards
    public DeckOfCards() {
        for (int count = 0; count < deck.length; count++) {
            deck[count] = new Card(faces[count % 13], suits[count / 13]);
        }
    }
    
    // Shuffle deck of Cards with one-pass algorithm
    public void shuffle() {
        currentCard = 0;
        
        for (int first = 0; first < deck.length; first++) {
            int second = randomNumbers.nextInt(NUMBER_OF_CARDS);
            Card temp = deck[first];
            deck[first] = deck[second];
            deck[second] = temp;
        }
    }
    
    // Deal one Card
    public Card dealCard() {
        if (currentCard < deck.length) {
            return deck[currentCard++];
        } else {
            return null; // No cards left
        }
    }
    
    // Method to check for a pair in a hand
    public boolean hasPair(Card[] hand) {
        return countOfAKind(hand, 2) >= 1;
    }

    // Method to check for two pairs in a hand
    public boolean hasTwoPairs(Card[] hand) {
        return countOfAKind(hand, 2) >= 2;
    }

    // Method to check for three of a kind in a hand
    public boolean hasThreeOfAKind(Card[] hand) {
        return countOfAKind(hand, 3) >= 1;
    }

    // Method to check for four of a kind in a hand
    public boolean hasFourOfAKind(Card[] hand) {
        return countOfAKind(hand, 4) >= 1;
    }

    // Method to check for a flush in a hand
    public boolean hasFlush(Card[] hand) {
        String suit = hand[0].getSuit();
        for (Card card : hand) {
            if (!card.getSuit().equals(suit)) {
                return false;
            }
        }
        return true;
    }

    // Method to check for a straight in a hand
    public boolean hasStraight(Card[] hand) {
        int[] faceValues = Arrays.stream(hand)
                .mapToInt(card -> Arrays.asList(faces).indexOf(card.getFace()))
                .sorted().toArray();
        
        for (int i = 0; i < faceValues.length - 1; i++) {
            if (faceValues[i + 1] - faceValues[i] != 1) {
                return false;
            }
        }
        return true;
    }

    // Method to check for a full house in a hand
    public boolean hasFullHouse(Card[] hand) {
        return countOfAKind(hand, 3) == 1 && countOfAKind(hand, 2) == 1;
    }
    
    // Helper method to count occurrences of cards with the same face value
    private int countOfAKind(Card[] hand, int count) {
        Map<String, Integer> faceCount = new HashMap<>();
        for (Card card : hand) {
            faceCount.put(card.getFace(), faceCount.getOrDefault(card.getFace(), 0) + 1);
        }
        int result = 0;
        for (int faceCountValue : faceCount.values()) {
            if (faceCountValue == count) {
                result++;
            }
        }
        return result;
    }
}