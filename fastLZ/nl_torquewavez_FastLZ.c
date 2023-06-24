#include <stdio.h>
#include "nl_torquewavez_FastLZ.h"

JNIEXPORT void JNICALL Java_nl_torquewavez_FastLZ_compress
(JNIEnv* env, jobject thisObject, jstring inputFileName, jstring outputFileName) {
  const char* inputFileNamePointer = (*env)->GetStringUTFChars(env, inputFileName, 0);
  const char* outputFileNamePointer = (*env)->GetStringUTFChars(env, outputFileName, 0);
  printf("Hello from C. Input = %s, output = %s", inputFileNamePointer, outputFileNamePointer);
}