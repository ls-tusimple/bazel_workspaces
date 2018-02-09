package(default_visibility = ["//visibility:public"])

cc_library(
    name = "hello-greet",
    srcs = ["hello-greet.cc"],
    hdrs = ["hello-greet.h"],
)

cc_library(
    name = "log",
    hdrs = [
        "log.h",
    ],
    deps = [
        "@glog//:glog",
    ],
)