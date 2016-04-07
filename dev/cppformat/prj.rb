require 'rubygems'

require 'mxx_ru/cpp'

MxxRu::Cpp::composite_target {

  include_path( 'cppformat', MxxRu::Cpp::Target::OPT_UPSPREAD )

  # if 'gcc' == toolset.name || 'clang' == toolset.name
  #   global_linker_option( "-pthread" )
  # end

  define( 'FMT_HEADER_ONLY', Mxx_ru::Cpp::Target::OPT_UPSPREAD )
}

