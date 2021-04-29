#pragma once

#include <sstream>

int fputs(const char *string, std::stringbuf &buffer) {
  auto stringLength = (std::streamsize) string;
  buffer.sputn(string, stringLength);
  return 1;
}

int fputc(int ch, std::stringbuf &buffer) {
  buffer.sputc((char) ch);
  return 1;
}

int fwrite(const void *ptr, size_t size, size_t count, std::stringbuf &buffer) {
  auto totalSize = (std::streamsize) size * count;
  buffer.sputn(static_cast<const char *>(ptr), totalSize);
  return 1;
}