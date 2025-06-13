load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "game",
    srcs = ["src/game.cpp"],
    hdrs = [
        "src/game.h",
    ],
    deps = [
        "@com_github_sdl//:sdl3_static",
    ],
)

cc_library(
    name = "engine",
    hdrs = ["src/engine.h"],
    deps = [
        ":game",
        "@com_github_sdl//:sdl3_static",
    ],
)

cc_binary(
    name = "release",
    srcs = ["src/main.cpp"],
    linkopts = select({
        "@platforms//os:macos": [
            "-framework", "Metal",
            "-framework", "IOKit",
            "-framework", "CoreVideo",
            "-framework", "CoreAudio",
            "-framework", "CoreGraphics",
            "-framework", "CoreMedia",
            "-framework", "CoreHaptics",
            "-framework", "AppKit",
            "-framework", "Carbon",
            "-framework", "QuartzCore",
            "-framework", "AudioToolbox",
            "-framework", "GameController",
            "-framework", "ForceFeedback",
            "-framework", "AVFoundation",
            "-framework", "CoreFoundation",
            "-framework", "UniformTypeIdentifiers",
        ],
        "//conditions:default": [],
    }),
    deps = [
        ":engine",
        ":game",
        "@com_github_sdl//:sdl3_static",
    ],
)

cc_binary(
    name = "snake",
    srcs = ["src/snake.c"],
    linkopts = select({
        "@platforms//os:macos": [
            "-framework", "Metal",
            "-framework", "IOKit",
            "-framework", "CoreVideo",
            "-framework", "CoreAudio",
            "-framework", "CoreGraphics",
            "-framework", "CoreMedia",
            "-framework", "CoreHaptics",
            "-framework", "AppKit",
            "-framework", "Carbon",
            "-framework", "QuartzCore",
            "-framework", "AudioToolbox",
            "-framework", "GameController",
            "-framework", "ForceFeedback",
            "-framework", "AVFoundation",
            "-framework", "CoreFoundation",
            "-framework", "UniformTypeIdentifiers",
        ],
        "//conditions:default": [],
    }),
    deps = [
        "@com_github_sdl//:sdl3_static",
    ],
)
