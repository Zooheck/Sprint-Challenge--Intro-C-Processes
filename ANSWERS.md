**1. List all of the main states a process may be in at any point in time on a standard Unix system. Briefly explain what each of these states means.**

1. Zombie: child process has finished but still has entry. Orphan: parent has finished before child. Sleeping: Waiting for event to complete. Running: currently active.

**2. What is a zombie process?**

2. A process which has finished its execution but still has an entry in the process table to report to its parent process is known as a zombie process.

**3. How does a zombie process get created? How does one get destroyed?**

3. To destroy a zombie process, it must send a correct exit code to its parent process, which then uses the wait command to kill the zombie.

**4. What are some of the benefits of working in a compiled language versus a non-compiled language? More specifically, what benefits are there to be had from taking the extra time to compile our code?**

4. A compiled language compiles down to machine level code, which makes the programs run very fast. Compilers yell at you when you make a mistake and point out specifically where you went wrong, whereas uncompiled languages simply break without any indication of why it is breaking.
