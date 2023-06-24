#include <stdio.h>
#include "nl_torquewavez_FastLZ.h"
#include "6pack.h"
#include "6unpack.h"

JNIEXPORT void JNICALL Java_nl_torquewavez_FastLZ_compress
(JNIEnv* env, jobject thisObject, jstring inputFileName, jstring outputFileName) {
  const char* inputFileNamePointer = (*env)->GetStringUTFChars(env, inputFileName, 0);
  const char* outputFileNamePointer = (*env)->GetStringUTFChars(env, outputFileName, 0);
  printf("Hello from compress. Input = %s, output = %s", inputFileNamePointer, outputFileNamePointer);
  pack_file(2, inputFileNamePointer, outputFileNamePointer);
  printf("Done!");
}

JNIEXPORT void JNICALL Java_nl_torquewavez_FastLZ_decompress
(JNIEnv* env, jobject thisObject, jstring inputFileName) {
  const char* inputFileNamePointer = (*env)->GetStringUTFChars(env, inputFileName, 0);
  printf("Hello from decompress. Input = %s", inputFileNamePointer);
  unpack_file(inputFileNamePointer);
  printf("Done!");
}
