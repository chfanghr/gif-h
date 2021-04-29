#pragma once

#include <sstream>

namespace gif {
int fputs(const char *string, std::stringbuf &buffer);

int fputc(int ch, std::stringbuf &buffer);

int fwrite(const void *ptr, size_t size, size_t count, std::stringbuf &buffer);
}