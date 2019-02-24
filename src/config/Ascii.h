// Copyright (c) 2018, The TurtleCoin Developers
// Copyright (c) 2019, GreenPoweredPayment
//
// Please see the included LICENSE file for more information

#pragma once

const std::string windowsAsciiArt =
        "\n _______      ______     ______   \n"
        "  /______/\    /_____/\   /_____/\  \n"
        "  \::::__\/__  \:::_ \ \  \:::_ \ \ \n"
        "   \:\ /____/\  \:(_) \ \  \:(_) \ \\n"
        "    \:\\_  _\/   \: ___\/   \: ___\/\n"
        "     \:\_\ \ \    \ \ \      \ \ \  \n"
        "      \_____\/     \_\/       \_\/  \n"
        "        -- GreenPoweredPayment --   \n"

const std::string nonWindowsAsciiArt =
        "\n ____     ____     ____    \n"
        "  /\  _`\  /\  _`\  /\  _`\  \n"
        "  \ \ \L\_\\ \ \L\ \\ \ \L\ \\n"
        "   \ \ \L_L \ \ ,__/ \ \ ,__/\n"
        "    \ \ \/, \\ \ \/   \ \ \/ \n"
        "     \ \____/ \ \_\    \ \_\ \n"
        "      \/___/   \/_/     \/_/ \n"
        "    -- GreenPoweredPayment --\n"

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32
const std::string asciiArt = windowsAsciiArt;
#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
