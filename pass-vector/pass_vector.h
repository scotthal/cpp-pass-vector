#ifndef EXPERIMENTAL_USERS_SCOTTHAL_TESTS_CC_PASS_VECTOR_PASS_VECTOR_H_
#define EXPERIMENTAL_USERS_SCOTTHAL_TESTS_CC_PASS_VECTOR_PASS_VECTOR_H_

#include <string>
#include <vector>

namespace pass_vector {
struct volunteer {
  std::string id;
  std::vector<std::string> tags;
};

std::vector<std::string> PassVector(const std::vector<volunteer>& volunteers);
}  // namespace pass_vector

#endif  // EXPERIMENTAL_USERS_SCOTTHAL_TESTS_CC_PASS_VECTOR_PASS_VECTOR_H_
