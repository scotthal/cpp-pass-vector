#include "pass-vector/pass_vector.h"

#include <glog/logging.h>

#include <string>
#include <vector>

namespace pass_vector {
std::vector<std::string> PassVector(const std::vector<volunteer>& volunteers) {
  std::vector<std::string> ids = {};

  for (const auto& volunteer : volunteers) {
    LOG(INFO) << "Considering " << volunteer.id;
    ids.push_back(volunteer.id);
  }

  return ids;
}
}  // namespace pass_vector
