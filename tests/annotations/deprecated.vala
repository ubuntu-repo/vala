[Version (deprecated = true)]
struct FooStruct {
	[Version (deprecated = true)]
	public int bar;
}

void test_struct_field () {
	FooStruct foo = { 42 };
	var i = foo.bar;
	foo.bar = i;
	assert (foo.bar == 42);
}

[Version (deprecated = true)]
class FooClass : Object {
	[Version (deprecated = true)]
	public int bar { get; set; default = 42; }
	[Version (deprecated = true)]
	public int baz;
}

void test_class_property () {
	var foo = new FooClass ();
	var i = foo.bar;
	foo.bar = i;
	assert (foo.bar == 42);
}

void main () {
	test_class_property ();
	test_struct_field ();
}
