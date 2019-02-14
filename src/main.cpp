#include "WProgram.h"

extern "C" int main(void)
{
#ifdef USING_MAKEFILE

	// To use Teensy 3.0 without Arduino, simply put your code here.
	// For example:

	int delay_ms = 1500;

	pinMode(13, OUTPUT);
	while (1) {
		digitalWriteFast(13, HIGH);
		delay(delay_ms);
		digitalWriteFast(13, LOW);
		delay(delay_ms);
	}


#else
	// Arduino's main() function just calls setup() and loop()....
	setup();
	while (1) {
		loop();
		yield();
	}
#endif
}

