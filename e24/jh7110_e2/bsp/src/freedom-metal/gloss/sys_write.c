//#include <metal/tty.h>
#include <sys/types.h>
#include <errno.h>
#include <unistd.h>

extern int sys_putc(char c);

/* Write to a file.  */
ssize_t
_write(int file, const void *ptr, size_t len)
{
  if (file != STDOUT_FILENO) {
    errno = ENOSYS;
    return -1;
  }

  const char *bptr = ptr;
  for (size_t i = 0; i < len; ++i)
    sys_putc(bptr[i]);//metal_tty_putc(bptr[i]);
  return len;
}
