#!/usr/bin/gawk -f
BEGIN{
    FS= ":"
    print "Going to read the dinosaur database.."
}

{print $0}
{print "\n"}
END{print "That is all that is printed"}
