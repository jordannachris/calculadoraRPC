/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "calcula.h"

bool_t
xdr_operandos (XDR *xdrs, operandos *objp)
{
	register int32_t *buf;

	 if (!xdr_float (xdrs, &objp->x))
		 return FALSE;
	 if (!xdr_float (xdrs, &objp->y))
		 return FALSE;
	return TRUE;
}
