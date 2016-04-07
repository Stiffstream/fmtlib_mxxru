require 'rubygems'

require 'mxx_ru/cpp'

MxxRu::Cpp::composite_target {

  include_path( 'cppformat', MxxRu::Cpp::Target::OPT_UPSPREAD )

  define( 'FMT_HEADER_ONLY', Mxx_ru::Cpp::Target::OPT_UPSPREAD )
}

