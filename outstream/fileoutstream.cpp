#include "fileoutstream.h"

FileOutStream::FileOutStream(std::string filename): file(filename) {}

void FileOutStream::sendString(std::string string) {
    file << string;
}
