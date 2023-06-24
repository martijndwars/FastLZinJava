.PHONY: all run clean

all:
	clang -c -fPIC -o fastlz.o fastlz.c
	clang -c -fPIC -o 6pack.o 6pack.c
	clang -c -fPIC -o 6unpack.o 6unpack.c
	clang -c -fPIC -I${JAVA_HOME}/include -I${JAVA_HOME}/include/darwin -o nl_torquewavez_FastLZ.o nl_torquewavez_FastLZ.c
	clang -dynamiclib -o libfastLZ.dylib nl_torquewavez_FastLZ.o fastlz.o 6pack.o 6unpack.o -lc

run:
	java -cp ../build/libs/FastLZinJava.jar -Djava.library.path=. nl.torquewavez.App

clean:
	rm -rf fastlz.o
	rm -rf 6pack.o
	rm -rf 6unpack.o
	rm -rf libfastLZ.dylib
	rm -rf output.txt
