# learn-cpp
## Set up build environment
1. cmake
2. llvm-toolchain
3. cppcheck
4. vscode
5. vscode extension:
    1. gitlens
    2. cmake
    3. ~clangd~ // file indexing is too slow when open big code base, use `C/C++ Extension Pack` instead
    4. Doxygen
    5. vscode-icons
6. change vscode settings
```json
{
    "workbench.colorTheme": "Monokai",
    "security.workspace.trust.untrustedFiles": "open",
    "git.autofetch": true,
    "editor.formatOnType": true,
    "editor.formatOnPaste": true,
    "editor.formatOnSave": true,
    "doxdocgen.generic.authorEmail": "ttxs69@huisa.win",
    "doxdocgen.generic.authorName": "sarace",
    "editor.codeActionsOnSave": {
        "source.fixAll": true
    },
    "workbench.iconTheme": "vscode-icons",
}
```
## Set up build system
1. CMakeLists.txt
```cmake
cmake_minimum_required(VERSION 3.10)

project(test)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_compile_options(-g -Wall -Wextra -pedantic -Werror)

add_executable(test
    main.cpp
)
```
