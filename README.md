# What Is It?

A light mxxru wrapper for fmt library.

# How To Use

## Prerequisites

To use *fmt_mxxru* it is necessary to have:

* C++11 compiler (VC++14.0, GCC 5.1 or above, clang 3.6 or above);
* [fmt](http://fmtlib.net/latest/index.html) 5.0.0 or above (see older tags for support of previous versions of fmt);
* [Mxx_ru](https://sourceforge.net/projects/mxxru/) 1.6.11 or above.

## Obtaining

### Cloning of Git Repository

```sh
git clone https://github.com/stiffstream/fmtlib_mxxru
```
And then:
```sh
cd fmtlib_mxxru
mxxruexternals
```
to download and extract *fmt_mxxru*'s dependencies.

### MxxRu::externals recipe

For *fmtlib_mxxru* itself:
```sh
MxxRu::arch_externals :fmtlib_mxxru do |e|
  e.url 'https://github.com/Stiffstream/fmtlib_mxxru/archive/fmt-5.0.0-1.tar.gz'

  e.map_dir 'dev/fmt_mxxru' => 'dev'
end
```

For *fmtlib_mxxru* dependencies:
```sh
MxxRu::arch_externals :fmt do |e|
  e.url 'https://github.com/fmtlib/fmt/archive/5.3.0.zip'

  e.map_dir 'include' => 'dev/fmt'
  e.map_dir 'src' => 'dev/fmt'
  e.map_dir 'support' => 'dev/fmt'
  e.map_file 'CMakeLists.txt' => 'dev/fmt/*'
  e.map_file 'README.rst' => 'dev/fmt/*'
  e.map_file 'ChangeLog.rst' => 'dev/fmt/*'
end
```

## Compilation

Compilation must be performed via Mxx_ru:
```sh
git clone https://github.com/stiffstream/fmtlib_mxxru
cd fmtlib_mxxru
mxxruexternals
cd dev
ruby build.rb
```
*NOTE.* It may be necessary to set up `MXX_RU_CPP_TOOLSET` environment variable.

# License

*fmtlib_mxxru* is distributed under
[BSD-3-Clause](http://spdx.org/licenses/BSD-3-Clause.html) license. See LICENSE
file for more information.

For the license of *fmt* library see LICENSE file in *fmt*
distributive.
