import java.util.Random;

public class Race {

	private static final int RACE_END = 70;

    public static void main(String[] args) {
        Random random = new Random();
        int tortoisePosition = 1;
        int harePosition = 1;
        int tick = 0;

        System.out.println("BANG !!!!!");
        System.out.println("AND THEY'RE OFF !!!!!");

        while (tortoisePosition < RACE_END && harePosition < RACE_END) {
            tick++;

            // Move tortoise
            int tortoiseMove = random.nextInt(10) + 1;
            if (tortoiseMove <= 5) {
                tortoisePosition += 3; // Fast plod
            } else if (tortoiseMove <= 7) {
                tortoisePosition -= 6; // Slip
            } else {
                tortoisePosition += 1; // Slow plod
            }
            tortoisePosition = Math.max(tortoisePosition, 1); // Ensure position doesn't go below 1

            // Move hare
            int hareMove = random.nextInt(10) + 1;
            if (hareMove <= 2) {
                // Sleep - No move
            } else if (hareMove <= 4) {
                harePosition += 9; // Big hop
            } else if (hareMove == 5) {
                harePosition -= 12; // Big slip
            } else if (hareMove <= 8) {
                harePosition += 1; // Small hop
            } else {
                harePosition -= 2; // Small slip
            }
            harePosition = Math.max(harePosition, 1); // Ensure position doesn't go below 1

            // Display the current positions
            printRaceTrack(tortoisePosition, harePosition);

            // Check if any of the animals have won
            if (tortoisePosition >= RACE_END && harePosition >= RACE_END) {
                System.out.println("It's a tie.");
                break;
            } else if (tortoisePosition >= RACE_END) {
                System.out.println("TORTOISE WINS!!! YAY!!!");
                break;
            } else if (harePosition >= RACE_END) {
                System.out.println("Hare wins. Yuch.");
                break;
            }

            // Delay for readability (optional, can be removed in console-only runs)
            try {
                Thread.sleep(100); // 1 second delay
            } catch (InterruptedException e) {
                Thread.currentThread().interrupt();
            }
        }
    }

    private static void printRaceTrack(int tortoisePosition, int harePosition) {
        for (int i = 1; i <= RACE_END; i++) {
            if (i == tortoisePosition && i == harePosition) {
                System.out.print("OUCH!!!");
                i += 5; // Skip next 5 positions due to "OUCH!!!" taking 6 characters
            } else if (i == tortoisePosition) {
                System.out.print("T");
            } else if (i == harePosition) {
                System.out.print("H");
            } else {
                System.out.print(" ");
            }
        }
        System.out.println();
    }

		
	}

