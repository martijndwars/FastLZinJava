clang -o example example.c fastlz.c

./example input.txt output.txt

clang -c -fPIC -I$JAVA_HOME/include -I$JAVA_HOME/include/darwin nl_torquewavez_FastLZ.c -o nl_torquewavez_FastLZ.o

clang -dynamiclib -o libfastLZ.dylib nl_torquewavez_FastLZ.o -lc

java -cp ../build/libs/FastLZinJava.jar -Djava.library.path=. nl.torquewavez.App
