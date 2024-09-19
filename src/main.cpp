#include "CLI/CLI.hpp"
#include <boost/iostreams/stream.hpp>
#include <filesystem>
#include <zlib.h>

using namespace std;

int main(int argc, char **argv) {
  CLI::App app;

  string inputPath;
  app.add_option("-i,--input", inputPath,
                 "Path to GZip compressed OpenAlex JSON Lines file")
      ->required();

  CLI11_PARSE(app, argc, argv);

  filesystem::path absInputPath = filesystem::absolute(inputPath);

  return 0;
}
