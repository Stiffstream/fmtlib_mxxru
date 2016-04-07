gem 'Mxx_ru', '>= 1.6.8'
require 'mxx_ru/externals'

MxxRu::git_externals :cppformat do |e|
  e.url 'https://github.com/cppformat/cppformat.git'
  e.commit 'd8e246d'

  e.map_dir 'cppformat' => 'dev/cppformat'
end

