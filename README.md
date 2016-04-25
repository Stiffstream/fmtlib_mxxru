# What Is It?

A light mxxru wrapper for cppformat library.

# How To Use

## Prerequisites

To use *cppformat_mxxru* it is necessary to have:

* C++11 compiler (VC++14.0, GCC 5.1 or above, clang 3.6 or above);
* [cppformat](cppformat.github.io) 2.1.0 or above;
* [Mxx_ru](https://sourceforge.net/projects/mxxru/) 1.6.11 or above.

## Obtaining

### Cloning of Hg Repository

```
hg clone https://bitbucket.org/sobjectizerteam/cppformat_mxxru-0.2
```
And then:
```
cd cppformat_mxxru-0.2
mxxruexternals
```
to download and extract *cppformat_mxxru*'s dependencies.

### MxxRu::externals recipe

For *cppformat_mxxru* itself:
~~~~~
::ruby
MxxRu::arch_externals :cppformat_mxxru do |e|
  e.url 'https://bitbucket.org/sobjectizerteam/cppformat_mxxru-0.2/get/v.0.2.0.tar.bz2'

  e.map_dir 'dev/cppformat_mxxru' => 'dev'
end
~~~~~
For *cppformat_mxxru* dependencies:
~~~~~
::ruby
MxxRu::arch_externals :cppformat do |e|
  e.url 'https://github.com/cppformat/cppformat/archive/2.1.0.tar.gz'

  e.map_dir 'cppformat' => 'dev/cppformat'
end
~~~~~

## Compilation

Compilation must be performed via Mxx_ru:
```
hg clone https://bitbucket.org/sobjectizerteam/cppformat_mxxru-0.2
cd cppformat_mxxru-0.2
mxxruexternals
cd dev
ruby build.rb
```
*NOTE.* It may be necessary to set up `MXX_RU_CPP_TOOLSET` environment variable.

# License

*cppformat_mxxru* is distributed under
[BSD-3-Clause](http://spdx.org/licenses/BSD-3-Clause.html) license. See LICENSE
file for more information.

For the license of *cppformat* library see LICENSE file in *cppformat*
distributive.

