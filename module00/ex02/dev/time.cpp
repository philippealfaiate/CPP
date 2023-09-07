#include <iostream>     // std::cout
#include <iomanip>      // std::put_time
#include <ctime>        // std::time_t, struct std::tm, std::localtime

void    displayTimestamp( void )
{
	time_t	time_now;
	tm		*local_time_now;
	
	time_now = std::time(0);
	local_time_now = std::localtime(&time_now);
	std::cout << std::put_time(local_time_now, "[%Y%m%d_%H%M%S]") << std::flush;
	return ;
}


int main()
{
    displayTimestamp();
    return 0;
}