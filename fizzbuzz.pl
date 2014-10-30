use 5.012;

my @fizz = qw/Fizz/;
my @buzz = qw/Buzz/;
foreach (1..100) {
    say ("$fizz[$_%3]"."$buzz[$_%5]" || $_);
}

