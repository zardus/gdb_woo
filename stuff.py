#!/usr/bin/python

import gdb
from pprint import pprint

gdb.execute("print \"Welcome to the darkside.\"")

print "Current breakpoints:"
pprint(gdb.breakpoints())

bp = gdb.Breakpoint("main")
print "Current breakpoints:"
pprint(gdb.breakpoints())


class some_command (gdb.Command):
	def __init__(self):
		super(some_command, self).__init__("some-command", gdb.COMMAND_USER)
	def invoke (self, args, from_tty):
		argv = gdb.string_to_argv(args)
		v = gdb.parse_and_eval(argv[0])
		print type(v)
some_command()
