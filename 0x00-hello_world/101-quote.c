
#include <stdio.h>                                                                                                                              
                                                                                                                                                
/**                                                                                                                                             
 *  * main - Entry point                                                                                                                           
 *   *                                                                                                                                              
 *    * Return: Always 1 (Success)                                                                                                                   
 *     */                                                                                                                                             
int main(void)                                                                                                                                  
{                                                                                                                                               
	        const char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	syscall(SYS_write, 1, msg, size(msg));
	return (1);	
