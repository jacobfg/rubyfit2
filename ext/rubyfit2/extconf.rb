require 'mkmf'

# add external Ant+ FIT SDK files
dir_config('libs', '../fitsdk', '../fitsdk')

create_makefile('rubyfit2/rubyfit2')
