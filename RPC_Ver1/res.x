struct response{
	char *url;
}; 
program HTTP_REQ{
	version HTTP_REQ{
		int req(response)=1;
		}=1;
}=0x23451111;
