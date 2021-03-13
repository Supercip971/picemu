#ifndef UTILS_H
#define UTILS_H
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#define ALIGN(addr, factor) ((addr) - (addr % factor))

struct add_with_carry_result
{
    uint32_t result;
    uint8_t carry;
    uint8_t overflow;
};

uint32_t add_with_carry(uint32_t x, uint32_t y, bool carry, struct add_with_carry_result *target);

inline int xor (int x, int y) {
    return x != y;
}

inline uint32_t bit_get(uint32_t base_value, uint32_t offset) {
	return (base_value >> offset) & 1;
}
#endif