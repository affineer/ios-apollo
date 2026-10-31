#pragma once
#include <stdint.h>

/*
 * Validate an FDT v17 blob and read a 32-bit or 64-bit integer
 * property directly beneath /chosen.
 *
 * Returns 1 on success, 0 if the blob is invalid or the property
 * is absent, duplicated, or has an unsupported length.
 */
int fdt_chosen_u64(uintptr_t fdt, const char *prop, uint64_t *out);
