#include "../lib/pch.h"

int main() {
	c_overlay overlay;

	while (overlay.msg_loop() && !overlay.ready) {}

	return 1;
}