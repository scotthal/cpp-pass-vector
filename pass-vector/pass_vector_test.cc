#include "pass-vector/pass_vector.h"

#include <gtest/gtest.h>

#include <string>
#include <vector>

namespace pass_vector {
namespace {
TEST(PassVector, ReturnsAllIds) {
  const std::vector<volunteer> volunteers = {
      {
          "sam5k",
          {
              "python",
              "networking",
          },
      },
      {
          "djpat",
          {
              "ai",
          },
      },
      {
          "jessg",
          {
              "java",
              "networking",
          },
      },
      {
          "rayo",
          {
              "java",
              "networking",
          },
      },
  };

  const auto result = PassVector(volunteers);
  const auto result_size = result.size();

  for (long unsigned int i = 0; i < result_size; ++i) {
    EXPECT_EQ(volunteers[i].id, result[i]);
  }
}
}  // namespace
}  // namespace pass_vector
