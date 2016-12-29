#include <iostream>
#include "sds.h"

int main() {
	auto foo = sdsnew("foo");
	auto bar = sdsnew("bar");
	if (sdscmp(bar, foo) < 0) {
		std::cout << "less" << std::endl;
	}
	sdsfree(foo);
	sdsfree(bar);
	return 0;
}
