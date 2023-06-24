package nl.torquewavez;

public class FastLZ {

  static {
    System.loadLibrary("fastLZ");
  }

  public native void compress(String inputFileName, String outputFileName);
  public native void decompress(String inputFileName);
}
