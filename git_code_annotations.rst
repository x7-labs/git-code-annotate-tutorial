Annotation report
*****************



.. note::
		Annotation contains uncommited changes


Unsafe use of strcmp
--------------------

The code listed here uses the strcmp function on a user provided input. Using strmp
is generally considered unsafe see `strcmp <http://no.more.strmp.org>`_


.. code-block:: c

	void parse(char *buf) {
		if (strcmp(buf, TEST_STR))
			printf("parsed test\n");
	}

Source: `vuln.c line 8 <https://github.com/x7-labs/git-code-annotate-tutorial/blob/master/vuln.c#L8>`_

