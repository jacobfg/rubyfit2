# -*- encoding: utf-8 -*-
$:.push File.expand_path('../lib', __FILE__)
require 'rubyfit2/version'

puts Dir.glob('lib/**/*.rb') + Dir.glob('ext/**/*.{c,h,rb}').sort


Gem::Specification.new do |s|
  s.name        = 'rubyfit2'
  s.version     = Rubyfit2::VERSION
  s.authors     = 'Jacob Fleming-Gale'
  s.email       = 'jacob@onamish.com'
  s.homepage    = 'https://github.com/jacobfg/rubyfit2'
  s.summary     = 'Ruby/C Parser for Ant+ FIT SDK 2.x'
  s.description = 'FIT files are binary, and as a result, are a pain to parse. This is a wrapper around the FIT SDK into a hash array.'

  s.rubyforge_project = 'rubyfit2'

  #s.files         = %w(git ls-files).split("\n")
  s.files         = Dir.glob('lib/**/*.rb') + Dir.glob('ext/**/*.{c,h,rb}')
  s.test_files    = %x(git ls-files -- {test,spec,features}/*).split("\n")
  s.executables   = %x(git ls-files -- bin/*).split("\n").map { |f| File.basename(f) }
  s.require_paths = ['lib', 'ext']

  s.extensions    = 'ext/rubyfit2/extconf.rb'

  # specify any dependencies here; for example:
  # s.add_development_dependency 'rspec'
  # s.add_runtime_dependency 'rest-client'

  s.license = 'Apache-2.0'
end
