# sha.py
#
# Author: aKuad
#
# Published with CC0 license

from hashlib import sha256

org = "hello"

obj = sha256()
obj.update(org.encode("UTF-8"))
has = obj.hexdigest()

print(org)
print(has)
