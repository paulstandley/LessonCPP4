#ifndef LESSONCPP_4
#define LESSONCPP_4

int get_int();
char get_char();
int calculate(int int_value1, int int_value2, int char_value);
void run_calculate();

void goto_function();

void print_number_block();
void print_triangel_block();
void print_triangel_block1();
void asc2();

void print_for_loop();
void loop_continue();

unsigned int PRNG();
void print_PRNG();
void random_cstlib();
void randon_seed_time();
void printRandomNumber();
int getRandomNumber(int min, int max);
void mt19937_mersenne();

/*
namespace MyRandom
{
	// Initialize our mersenne twister with a random seed based on the clock (once at system startup)
	std::mt19937 mersenne{ static_cast<std::mt19937::result_type>(std::time(nullptr)) };
}
*/

int getRandomNumber1(int min, int max);
void displayGetRandomNumber();

double getDoubleCalculator();
char getOperatorCalculator();
void printResultsCalculator(double x, char op, double y);
void runCalculator();

namespace myConstants
{
	constexpr double gravity{ 9.8 }; // in meters/second squared
}
double getInitialHeight();
double calculateHeight(double initialHeight, int secondsPassed);
void printHeight(double height, int secondsPassed);
void runTowerFall();



#endif // !LESSONCPP_4

