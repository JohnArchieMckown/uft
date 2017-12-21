/* © Copyright 1995, Richard M. Troth, all rights reserved.  <plaintext> 
 * 
 *	  Name: uftdlog.c 
 *		Unsolicited File Transfer daemon log function 
 *	Author: Rick Troth, Houston, Texas, USA (concerto) 
 *	  Date: 1995-Mar-25 (happy b'day GHN) 
 * 
 */

/* ------------------------------------------------------------- UFTDLOG 
 */
#include "uft.h"

int uftdlog(int s, char *b) {
    char temp[256];

    (void) sprintf(temp, "#*%s", b);
    (void) uft_putline(s, temp);

    return 0;
}
