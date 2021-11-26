# sha.pl
#
# Author: aKuad
#
# Published with CC0 license

use Digest::SHA;

$org = "hello";
$has = "";

$obj = Digest::SHA->new(256);
$obj->add($org);
$has = $obj->hexdigest;

print $org, "\n";
print $has, "\n";
