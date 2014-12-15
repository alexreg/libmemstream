libmemstream
============

*libmemstream* is a port of the **dynamic memory buffer stream functions** (namely `fmemopen`, `open_memstream`, `open_wmemstream`) to OS X.

The source code is based on the [source][FreeBSD source] of [FreeBSD 11][FreeBSD].

Building
--------

To build the library, simply run `./build` from the root directory of the project. This produces output in the `lib/` and `man/` directories (and intermediary output in `obj/`).

Installing
----------

To install the library, first build it, then run `./install` as superuser from the root directory of the project. This will install the library under the default prefix directory `/usr/local`.

A custom prefix directory can be specified by setting the `INSTALL_PREFIX` environment variable before installing.

Usage
-----

The manual page for the API is `memstream(3)`.

[FreeBSD]: https://www.freebsd.org/relnotes/CURRENT/relnotes/article.html
[FreeBSD source]: https://svnweb.freebsd.org/base/head/
