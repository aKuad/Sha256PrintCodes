# sha.rb
#
# Author: aKuad
#
# Published with CC0 license

require "openssl"

org = "hello"

obj = OpenSSL::Digest.new("sha256")
obj.update(org)
has = obj.hexdigest()

puts org
puts has
