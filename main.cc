#include <boost/interprocess/managed_mapped_file.hpp>
#include <boost/interprocess/managed_shared_memory.hpp>
#include <boost/interprocess/containers/string.hpp>
#include <boost/unordered_map.hpp>
#include <nan.h>
#include "mmap-object.h"

__asm__(".symver memcpy,memcpy@GLIBC_2.2.5");

NODE_MODULE(mmap_object, SharedMap::Init)
