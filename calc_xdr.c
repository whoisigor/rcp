/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "calc.h"

bool_t
xdr_operands (XDR *xdrs, operands *objp)
{
	register int32_t *buf;

	 if (!xdr_float (xdrs, &objp->n1))
		 return FALSE;
	 if (!xdr_float (xdrs, &objp->n2))
		 return FALSE;
	return TRUE;
}