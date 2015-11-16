#ifndef NVIM_INDENT_C_H
#define NVIM_INDENT_C_H

#include "nvim/vim.h"

// Find result cache for cpp_baseclass
typedef struct {
    int found;
    lpos_T lpos;
} cpp_baseclass_cache_T;

#ifdef INCLUDE_GENERATED_DECLARATIONS
# include "indent_c.h.generated.h"
#endif
#endif  // NVIM_INDENT_C_H
