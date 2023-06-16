#ifndef TIMER_H
#define TIMER_H

class c_timer {
private:
	std::chrono::high_resolution_clock::time_point strt;
public:
	void start();
	int end();
	void sleep_ms(unsigned int delay);
	void q_sleep(int ms);
	void acc_sleep(unsigned int delay);
	bool held_button(unsigned int vk_code, unsigned int delay);
	void until_press(unsigned int vk_code, unsigned int vk_code2);
};

#endif