#include <iostream>

namespace mp {

template <class Item> int printItem(Item item) {
	std::cout << item << ' ';
	return 0;
}

template <class ...Items>
void unpackItems(Items...) {}

template <class... Items> void print(Items... items) {
	unpackItems(printItem<Items>(items)...);
	std::cout << std::endl;
}

}
