# dynamic and static scoping

$x = 10;

sub f{
    
    return $x;
}

sub g{
    
    local $x = 20;
    
    return f();
}

print "x dinâmico: ";
print g()."\n";

print "x estático : $ x";
