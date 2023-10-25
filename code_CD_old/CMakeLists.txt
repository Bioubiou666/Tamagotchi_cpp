cmake_minimum_required(VERSION 3.5)

project(MonProjetC++)

# Configuration de l'ex‚cutable principal
add_executable(MonProjet
    main.cpp
    tamagotchi.cpp
    graphics/AllDisplays.cpp
    graphics/graphics_functions.cpp
    info/mainInfo.cpp
    lang/AllLang.cpp
)

# Configuration des fichiers d'en-tˆte
target_include_directories(MonProjet PRIVATE ${CMAKE_SOURCE_DIR})

# Configuration des fichiers texte n‚cessaires
configure_file(graphics/AllEggs/Egg_1.txt AllEggs/Egg_1.txt COPYONLY)
configure_file(graphics/AllEggs/Egg_2.txt AllEggs/Egg_2.txt COPYONLY)
configure_file(graphics/AllEggs/Egg_3.txt AllEggs/Egg_3.txt COPYONLY)
configure_file(graphics/AllEggs/Egg_4.txt AllEggs/Egg_4.txt COPYONLY)
configure_file(graphics/AllEggs/Egg_5.txt AllEggs/Egg_5.txt COPYONLY)
configure_file(graphics/AllEggs/Egg_Def.txt AllEggs/Egg_Def.txt COPYONLY)
configure_file(graphics/AllEggs/RandomImg.txt AllEggs/RandomImg.txt COPYONLY)

# D‚finition des fichiers source
set(SOURCES
    main.cpp
    tamagotchi.cpp
    graphics/AllDisplays.cpp
    graphics/graphics_functions.cpp
    info/mainInfo.cpp
    lang/AllLang.cpp
)