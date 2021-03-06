#include "guncat.ih"

// Guncat all files specified as the program's arguments in turn.
// if no arguments are provided, process stdin
// The constructor has initialized a Decryptor object, which has read the
// first stdin line as the passphrase.

void Guncat::arguments()
{
    if (d_arg.nArgs() == 0)
        process(cin);
    else
        processFileArguments();
}
