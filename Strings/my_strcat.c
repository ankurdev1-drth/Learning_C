//versions of the strcat function
//first method lengthy one
char  *strcat(char *s1, const char *s2)
{
	char *p = s1;
	while (*p != '\0')
	p++;
	while (*s2 !=  '\0'){
		*p = *s2;
		p++;
		s2++;
		}
	 *p = '\0';
	return s1;
}
/* - Uses two step algorithm: 
- locate the null character at the end of the string s1 and make p point to it.
- copy characters one by one from s2 to where p is pointing.
*/
// Method 2: 
char *strcat(char *s1, const char *s2)
{
	char *p = s1;
		
	while (*p)
	p++;
	while (*p++ = *s2++);
	return s1;
	}
