// Copyright (c) 2018, The TurtleCoin Developers
// Copyright (c) 2019, GreenPoweredPayment
//
// Please see the included LICENSE file for more information

#pragma once

const std::string windowsAsciiArt =
      "--GreenPoweredPayment--";


const std::string nonWindowsAsciiArt =
      "--GreenPoweredPayment--";


/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32
const std::string asciiArt = windowsAsciiArt;
#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
