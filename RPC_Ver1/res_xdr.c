/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "res.h"

bool_t
xdr_response (XDR *xdrs, response *objp)
{
	register int32_t *buf;

	 if (!xdr_pointer (xdrs, (char **)&objp->url, sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}
