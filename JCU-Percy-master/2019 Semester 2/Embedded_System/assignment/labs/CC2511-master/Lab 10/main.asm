/**
 * CC2511 Lab 10
 */

	.text 			/* The "text" section of the executable is where code is placed. */
	.align	2 		/* Make sure the starting address is a multiple of 2. */
	.global	main 	/* Declare "main" as a global symbol (callable from other files). */
  .syntax unified /* Enable Thumb2 instruction set support */

/* Main function */
main:
	push {lr}  /* The return address is in the "link register" (lr). Preserve it by pushing it to the stack. */

	/* Write your code here */

	pop {pc}  /* Return from this function, by popping the return address into the program counter (pc) */
