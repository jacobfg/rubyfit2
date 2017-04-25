#!/usr/bin/env ruby

require 'rubyfit2'

fitdata = 'ruby streaming/parsing class?'
file    = '/Users/jacob/Dropbox/Personal Documents/Running/Garmin Activities/2017-04-23-06-01-47-RUNNING-FR735XT.FIT'

iostream = IO.read(file)


puts RubyFit2::parse(iostream)
# parser.parse(iostream)

# puts fit.to_json(iostream)
