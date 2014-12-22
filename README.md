libmemstream
============

*libmemstream* is an implementation of the [POSIX][POSIX Standard] **dynamic memory buffer stream functions** (namely [`fmemopen`][POSIX fmemopen], [`open_memstream`][POSIX open_memstream], [`open_wmemstream`][POSIX open_wmemstream]) for OS X.

The source code is based on the [source][FreeBSD source] of [FreeBSD 11][FreeBSD release].

Building
--------

To build the library, simply run `./build` from the root directory of the project. This produces all output in the `output` subdirectory.

Installing
----------

To install the library, first build it, then run `./install` as superuser from the root directory of the project. This will install the library under the default prefix directory `/usr/local`.

A custom prefix directory can be specified by setting the `INSTALL_PREFIX` environment variable before installing.

Usage
-----

The manual page for the API is `memstream(3)`.

[POSIX Standard]: http://pubs.opengroup.org/onlinepubs/9699919799/
[POSIX fmemopen]: http://pubs.opengroup.org/onlinepubs/9699919799/functions/fmemopen.html
[POSIX open_memstream]: http://pubs.opengroup.org/onlinepubs/9699919799/functions/open_memstream.html
[POSIX open_wmemstream]: http://pubs.opengroup.org/onlinepubs/9699919799/functions/open_memstream.html

[FreeBSD]: https://www.freebsd.org/
[FreeBSD release]: https://www.freebsd.org/relnotes/CURRENT/relnotes/article.html
[FreeBSD source]: https://svnweb.freebsd.org/base/head/
