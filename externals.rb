#!/usr/bin/rake -f
gem 'Mxx_ru', '>= 1.6.9'
require 'mxx_ru/externals'

MxxRu::arch_externals :cppformat do |e|
  e.url 'https://github.com/cppformat/cppformat/archive/2.1.0.tar.gz'

  e.map_dir 'cppformat' => 'dev/cppformat'
end

