package nl.torquewavez;

public class App {
    public static void main(String[] args) {
        new FastLZ().compress("input.txt", "output.txt");
        System.out.println("Compress done from Java");

        new FastLZ().decompress("output.txt");
        System.out.println("Decompress done from Java");
    }
}
