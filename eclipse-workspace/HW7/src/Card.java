
public class Card {

	 	private final String face;
	    private final String suit;

	    // Constructor initializes card's face and suit
	    public Card(String cardFace, String cardSuit) {
	        this.face = cardFace;
	        this.suit = cardSuit;
	    }

	    // Getters for face and suit
	    public String getFace() {
	        return face;
	    }

	    public String getSuit() {
	        return suit;
	    }

	    // String representation of the Card
	    public String toString() {
	        return face + " of " + suit;
	    }
	

}
