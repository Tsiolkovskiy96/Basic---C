bplist00�_WebMainResource�	
_WebResourceData_WebResourceMIMEType_WebResourceTextEncodingName^WebResourceURL_WebResourceFrameNameO_<html><head></head><body><pre style="word-wrap: break-word; white-space: pre-wrap;">/*
Lomakin, MinGw + Notepad++
*/
#include &lt;stdio.h&gt;
int main ()
{
int range= 0;
int cycle = 0;
int sum = 0;
int answer = 0;
int enumeration = 0;
int height = 0;

//task 1

printf("‚¢¥¤¨â¥ æ¥«®¥ ç¨á«®\n");
scanf("%d",&amp;range);
if(range &gt;= 0 &amp; range &lt;= 100)
{
	printf("„&nbsp;­­®¥ ç¨á«® ¢å®¤¨â ¢ ¤¨&nbsp;¯&nbsp;§®­ ®â 0 ¤® 100\n");
}
else
{
	printf("„&nbsp;­­®¥ ç¨á«® ­¥ ¢å®¤¨â ¢ ¤¨&nbsp;¯&nbsp;§®­ ®â 0 ¤® 100\n");
}
//task 2

printf("‚¢¥¤¨â¥ 10 æ¥«ëå ç¨á¥«\n");
for (int i = 0; i &lt; 10; i++)
{
scanf("%d",&amp;cycle);
sum += cycle;	
}
answer = sum / 10;
printf("‚&nbsp;è¥ ç¨á«® à&nbsp;¢­® = %d\n", answer);



//task 3

printf("‚¢¥¤¨â¥ æ¥«®¥ ç¨á«® ¤® 1000\n");
scanf("%d",&amp;enumeration);
for(int i = 0; i &lt;= enumeration; i++)
{
	if (i % 2 == 0)
	{
	printf("%d,", i);
	}
}


//task 4

printf("‚¢¥¤¨â¥ ¢ëá®âã à&nbsp;¢­®¡¥¤à¥­­®£® âà¥ã£®«ì­¨ª&nbsp;\n");
scanf("%d", &amp;height);
for(int i = 1; i &lt;= height; i++)
{
	for(int j = 1; j &lt;= (height + i); j++)
	{
		if(j &lt;= (height - i + 1))
		{
			printf(" ");
		}
		else
		{
			printf("^");
		}
	}
	printf("\n");
}
return 0;
}</pre></body></html>Xtext/x-cUUTF-8_nhttps://d2xzmw6cctk25h.cloudfront.net/homeworkattachment/2048751/attachment/5edb4f69c167d8c46972795b21c9a01b.cP    ( : P n } �� w                           x