#ifndef FILEOUTSTREAM_H
#define FILEOUTSTREAM_H

#include "outstream.h"
#include <iostream>
#include <fstream>

class FileOutStream: public OutStream
{
public:
    FileOutStream(std::string);

    void sendString(std::string);

private:
    std::ofstream file;
};

#endif // FILEOUTSTREAM_H
