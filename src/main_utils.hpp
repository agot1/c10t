#ifndef __MAIN_UTILS_HPP__
#define __MAIN_UTILS_HPP__

#include <string>
#include <set>
#include <sstream>
#include <vector>
#include <string>

#include "image/color.hpp"

#include "settings_t.hpp"

#include <boost/filesystem.hpp>

class application_error : std::exception
{
  private:
    const char* message;
  public:
    application_error(const char* message) : message(message) {}

    const char* what() const throw() {
      return message;
    }
};

bool do_write_palette(settings_t& s, const boost::filesystem::path& path);
bool do_read_palette(settings_t& s, const boost::filesystem::path& path);

bool read_opts(settings_t& s, int argc, char* argv[]);

extern std::vector<std::string> hints;
extern std::vector<std::string> warnings;
extern std::stringstream error;

#endif /* __MAIN_UTILS_HPP__ */
