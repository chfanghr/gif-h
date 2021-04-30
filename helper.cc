//
// Created by 方泓睿 on 2021/4/30.
//

#include "helper.h"

int gif::fputs(const char *string, std::stringbuf &buffer) {
  auto stringLength = (std::streamsize) (strlen(string) - 1);
  buffer.sputn(string, stringLength);
  return 1;
}

int gif::fwrite(const void *ptr, size_t size, size_t count, std::stringbuf &buffer) {
  auto totalSize = (std::streamsize) size * count;
  buffer.sputn(static_cast<const char *>(ptr), totalSize);
  return 1;
}

int gif::fputc(int ch, std::stringbuf &buffer) {
  buffer.sputc((char) ch);
  return 1;
}
