#include "../lib/pch.h"

c_overlay overlay;

int main() {
	if (!overlay.start_input_handler())
		return 1; // error message here

	while (overlay.msg_loop() && !overlay.ready) {}

	return 1;
}