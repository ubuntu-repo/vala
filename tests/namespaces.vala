using Foo.Sub;

public class GlobalTestClass {
	public GlobalTestClass() {
	}
}

namespace Maman {
	public class GlobalTestClass {
		public GlobalTestClass() {
			stdout.printf("Incorrect class constructed");
		}
	}

	static int main (string[] args) {
		stdout.printf ("Namespace Test\n");

		Bar.run ();

		new global::GlobalTestClass();

		var obj = new ClassInNestedNamespace ();

		return 0;
	}

	class Bar : Object {
		public static void run () {
			stdout.printf ("Class in Namespace Test\n");
		}
	}
}

public class Foo.Sub.ClassInNestedNamespace {
}

