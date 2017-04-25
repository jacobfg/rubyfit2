#!/bin/sh -eu

GEMNAME="rubyfit2"
BASE=$(dirname "${0}")
cd $BASE

rm -rf *.gem
gem build ${GEMNAME}.gemspec

gem uninstall --user-install --all ${GEMNAME}
gem install --verbose --user-install  --local ${GEMNAME}-*.gem
