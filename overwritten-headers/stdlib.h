#ifndef STDLIB_H
# define STDLIB_H

# ifdef linux
#  include </usr/include/stdlib.h>
# else
// THESE DON'T WORK:
// #  include "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/stdlib.h"
// #  include </Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1/stdlib.h>

// THESE DON'T WORK:
// #  include "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/include/c++/v1/stdlib.h"
// #  include </Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/include/c++/v1/stdlib.h>

// THESE WORK:
#  include "/Library/Developer/CommandLineTools/SDKs/MacOSX10.14.sdk/usr/include/stdlib.h"
// #  include </Library/Developer/CommandLineTools/SDKs/MacOSX10.14.sdk/usr/include/stdlib.h>
# endif

# include "src/unstable/libft_unstable.h"

#endif
