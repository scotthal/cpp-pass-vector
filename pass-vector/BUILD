cc_library(
    name = "pass_vector",
    srcs = [
        "pass_vector.cc",
    ],
    hdrs = [
        "pass_vector.h",
    ],
    deps = [
        "@com_github_google_glog//:glog",
    ],
)

cc_test(
    name = "pass_vector_test",
    size = "small",
    srcs = [
        "pass_vector_test.cc",
    ],
    deps = [
        ":pass_vector",
        "@com_google_googletest//:gtest_main",
    ],
)
